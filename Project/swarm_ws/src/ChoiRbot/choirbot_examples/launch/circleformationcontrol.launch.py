from launch import LaunchDescription
from launch.actions import TimerAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import numpy as np
import sys
import os

def generate_launch_description():
    # Default parameters
    L = 5.0  # Default radius of the circle - adjusted for 8 robots
    seed = 5 # Default random seed
    N = 8    # <<<< Number of robots set to 8

    # Allow overriding parameters from the command line
    for arg in sys.argv:
        if arg.startswith("L:="):
            L = float(arg.split(":=")[1]) # L is the radius
        if arg.startswith("N:="):
            N = int(arg.split(":=")[1])   # Allow N to be set via command line
        if arg.startswith("seed:="):
            seed = int(arg.split(":=")[1])

    print(f"Launching formation control with N={N} robots, Radius L={L}, seed={seed}")

    # Set random number generator seed for reproducibility
    np.random.seed(seed)

    # --- Define Circular Formation Parameters ---
    R = L  # Use L as the radius of the circle

    # 1. Adjacency Matrix (Adj) for a Ring Topology
    # Each robot is connected to its two immediate neighbors in the circle.
    Adj = np.zeros((N, N), dtype=int)
    for i in range(N):
        Adj[i, (i + 1) % N] = 1  # Connection to the next neighbor
        Adj[i, (i - 1 + N) % N] = 1  # Connection to the previous neighbor

    # 2. Desired Inter-Robot Distances (W) for the Ring Topology
    # This matrix stores the desired distances between connected robots.
    # For a circle, all adjacent neighbors will have the same desired distance (chord length).
    d_neighbor = 2 * R * np.sin(np.pi / N) # Chord length between adjacent robots
    W = np.zeros((N, N))
    for i in range(N):
        if Adj[i, (i + 1) % N] == 1: # If connected to the next neighbor
            W[i, (i + 1) % N] = d_neighbor
        if Adj[i, (i - 1 + N) % N] == 1: # If connected to the previous neighbor
            W[i, (i - 1 + N) % N] = d_neighbor
    
    # 3. Initial Target Positions (P) for a Circle
    # Robots are placed equally spaced on a circle of radius R on the XY plane.
    P_circle = np.zeros((N, 3))
    for k in range(N):
        angle = 2 * np.pi * k / N
        P_circle[k, 0] = R * np.cos(angle)  # x-coordinate
        P_circle[k, 1] = R * np.sin(angle)  # y-coordinate
        P_circle[k, 2] = 0.0                # z-coordinate (base before perturbation)
    P = P_circle
    
    # Add a random perturbation to the initial positions
    # The scale of perturbation is based on the radius.
    perturbation_scale = R / 4.0 
    P += np.random.uniform(-perturbation_scale, perturbation_scale, (N, 3))

    # IMPORTANT: Ensure robots spawn slightly above the ground plane (e.g., Z=0.1m)
    P[:, 2] = np.maximum(P[:, 2], 0.1) 
    # --- End of Formation Parameter Definition ---

    # Initialize lists to hold launch actions
    robot_launch_actions = []  # For nodes (guidance, controller) launched with TimerAction
    immediate_launch_actions = [] # For nodes/actions (spawners, Gazebo) launched immediately

    # Add executables for each of the N robots
    for i in range(N): # This loop will now run N times (e.g., 8 times)
        agent_namespace_str = 'agent_{}'.format(i)
        
        # Determine neighbors and weights for the current agent based on Adj and W
        current_in_neighbors = np.nonzero(Adj[:, i])[0].tolist()
        current_out_neighbors = np.nonzero(Adj[i, :])[0].tolist()
        current_weights = W[i, :].tolist() 
        initial_position_list = P[i, :].tolist() # [x, y, z] for this agent

        # Define the Guidance Node for the current agent
        robot_launch_actions.append(Node(
            package='choirbot_examples',
            executable='choirbot_formationcontrol_guidance',
            output='screen',
            namespace=agent_namespace_str,
            parameters=[{
                'agent_id': i,
                'N': N,
                'in_neigh': current_in_neighbors, 
                'out_neigh': current_out_neighbors, 
                'weights': current_weights 
            }]
        ))
        
        # Define the Controller Node for the current agent
        robot_launch_actions.append(Node(
            package='choirbot_examples',
            executable='choirbot_formationcontrol_controller',
            output='screen',
            namespace=agent_namespace_str,
            parameters=[{'agent_id': i}]
        ))
        
        # Define the TurtleBot Spawner Node for the current agent
        immediate_launch_actions.append(Node(
            package='choirbot_examples',
            executable='choirbot_turtlebot_spawner',
            output='screen',
            parameters=[
                {'namespace': agent_namespace_str}, # Parameter name expected by the spawner script
                {'position': initial_position_list} # Parameter name expected by the spawner script
            ]
        ))
    
    # Include the Gazebo launch file
    # This path assumes 'gazebo.launch.py' is directly in the 'share/choirbot_examples/' folder
    gazebo_launcher_file = os.path.join(
        get_package_share_directory('choirbot_examples'), 
        'gazebo.launch.py'
    )
    immediate_launch_actions.append(IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gazebo_launcher_file)
    ))
    
    # Delay the launch of robot guidance and controller nodes
    # This gives Gazebo time to load and robots to spawn before control logic starts.
    delayed_robot_logic = TimerAction(
        period=10.0, # Adjusted delay, 12s might be okay too
        actions=robot_launch_actions  # Pass the list of guidance/controller Node actions
    )
    immediate_launch_actions.append(delayed_robot_logic)

    # Return the complete launch description
    return LaunchDescription(immediate_launch_actions)
