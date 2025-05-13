from launch import LaunchDescription
from launch.actions import TimerAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import numpy as np
import sys
import os

def generate_launch_description():
    L_param = 3.0  # Default length of the rectangle
    W_ratio = 0.6 # Default width ratio (Width = Length * W_ratio)
    seed = 5     # Default random seed
    N = 4        # Number of robots for a rectangle

    for arg in sys.argv:
        if arg.startswith("L:="): 
            L_param = float(arg.split(":=")[1])
        if arg.startswith("W_ratio:="): 
            W_ratio = float(arg.split(":=")[1])
        if arg.startswith("seed:="):
            seed = int(arg.split(":=")[1])

    # set rng seed
    np.random.seed(seed)

    # --- Define 4-Robot Rectangular Formation Parameters ---
    L_rect = L_param       # Length of the rectangle (e.g., along x-axis)
    W_rect = L_param * W_ratio # Width of the rectangle (e.g., along y-axis)

    # 1. Target Positions (P) for the 4 Corners of a Rectangle
    # Robots are placed on the XY plane, Z=0 initially.
    P_rect = np.array([
        [-L_rect / 2,  W_rect / 2, 0.0],  # Agent 0: Top-Left
        [ L_rect / 2,  W_rect / 2, 0.0],  # Agent 1: Top-Right
        [ L_rect / 2, -W_rect / 2, 0.0],  # Agent 2: Bottom-Right
        [-L_rect / 2, -W_rect / 2, 0.0]   # Agent 3: Bottom-Left
    ])
    P = P_rect

    # 2. Adjacency Matrix (Adj) for a Ring Topology (0-1-2-3-0)
    Adj = np.zeros((N, N), dtype=int)
    for i in range(N):
        Adj[i, (i + 1) % N] = 1  # Connection to next neighbor along perimeter
        Adj[i, (i - 1 + N) % N] = 1  # Connection to previous neighbor

    # 3. Desired Inter-Robot Distances (W) for the Ring Topology
    W = np.zeros((N, N))
    # Desired distances for the sides of the rectangle:
    # P0-P1: L_rect (length)
    # P1-P2: W_rect (width)
    # P2-P3: L_rect (length)
    # P3-P0: W_rect (width)
    
    # Agent 0 to Agent 1 (and vice-versa)
    W[0, 1] = L_rect
    W[1, 0] = L_rect
    # Agent 1 to Agent 2 (and vice-versa)
    W[1, 2] = W_rect
    W[2, 1] = W_rect
    # Agent 2 to Agent 3 (and vice-versa)
    W[2, 3] = L_rect
    W[3, 2] = L_rect
    # Agent 3 to Agent 0 (and vice-versa)
    W[3, 0] = W_rect
    W[0, 3] = W_rect
    
    # Initial positions have a random perturbation
    perturbation_scale = min(L_rect, W_rect) / 4.0 
    P += np.random.uniform(-perturbation_scale, perturbation_scale, (N, 3))

    # IMPORTANT: Ensure robots spawn slightly above the ground plane
    P[:, 2] = np.maximum(P[:, 2], 0.1)
    # --- End of Formation Parameter Definition ---

    robot_launch_actions = []
    immediate_launch_actions = []

    for i in range(N): # Loop will run 4 times now
        agent_namespace_str = 'agent_{}'.format(i)
        
        current_in_neighbors = np.nonzero(Adj[:, i])[0].tolist()
        current_out_neighbors = np.nonzero(Adj[i, :])[0].tolist()
        current_weights = W[i, :].tolist()
        initial_position_list = P[i, :].tolist()

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
        
        robot_launch_actions.append(Node(
            package='choirbot_examples',
            executable='choirbot_formationcontrol_controller',
            output='screen',
            namespace=agent_namespace_str,
            parameters=[{'agent_id': i}]
        ))
        
        immediate_launch_actions.append(Node(
            package='choirbot_examples',
            executable='choirbot_turtlebot_spawner',
            output='screen',
            parameters=[
                {'namespace': agent_namespace_str},
                {'position': initial_position_list} 
            ]
        ))
    
    gazebo_launcher_file = os.path.join(
        get_package_share_directory('choirbot_examples'), 
        'gazebo.launch.py'
    )
    immediate_launch_actions.append(IncludeLaunchDescription(
        PythonLaunchDescriptionSource(gazebo_launcher_file)
    ))
    
    delayed_robot_logic = TimerAction(
        period=10.0, 
        actions=robot_launch_actions
    )
    immediate_launch_actions.append(delayed_robot_logic)

    return LaunchDescription(immediate_launch_actions)
