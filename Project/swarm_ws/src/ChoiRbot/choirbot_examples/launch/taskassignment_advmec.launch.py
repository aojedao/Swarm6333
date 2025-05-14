from launch import LaunchDescription
from launch.actions import TimerAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from disropt.utils.graph_constructor import binomial_random_graph
import numpy as np
import sys
import argparse
import os
from nav_msgs.msg import Odometry


def generate_launch_description():
    N=3 #For three bots
    seed=3
    
    ble_devices = [
        {"name": "BLE_Arduino_Pandebono", "address": "CD:EA:14:C3:CB:A5", "uuid": "0000ffe1-0000-1000-8000-00805f9b34fb"},
        {"name": "BLE_Propeller_Mate"   , "address": "3C:71:BF:CF:14:1A", "uuid": "0000ffe1-0000-1000-8000-00805f9b34fb"},
        {"name": "BLE_Device_3", "address": "AA:BB:CC:DD:EE:03", "uuid": "0000ffe1-0000-1000-8000-00805f9b34fb"}, # Added for debugging with 3 agents
    ]
    
    for arg in sys.argv:
        if arg.startswith("N:="):
            N = int(arg.split(":=")[1])
        if arg.startswith("seed:="):
            seed = int(arg.split(":=")[1])

    # generate communication graph (this function also sets the seed)
    #--------------NEED TO CHANGE------------------------
    #this is enabled as a random graph but for real life sim we might have to change it in such a way that all robots are communicating
    #Adj = binomial_random_graph(N, 0.2, seed=seed)
    #for two bots fully connected adjacency matrix

    #Adj = np.ones((2, 2), dtype=int) - np.eye(2, dtype=int) #for two bots fully connected adjacency matrix

    #Adj = np.ones((3, 3), dtype=int) - np.eye(3, dtype=int) #for two bots fully connected adjacency matrix

    Adj = np.ones((N, N), dtype=int) - np.eye(N, dtype=int)

    # generate initial positions in [-3, 3] with z = 0

    P = np.zeros((N, 3))
    P[:, 0:2] = np.random.randint(-3, 3, (N, 2))




    # initialize launch description
    robot_launch = []       # launched after 10 sec (to let Gazebo open)
    launch_description = [] # launched immediately (will contain robot_launch)

    # add task table executable
    robot_launch.append(Node(
            package='choirbot_examples', executable='choirbot_taskassignment_table', output='screen',
            prefix=['xterm -hold -e'],
            parameters=[{'N': N}]))

    # add executables for each robot
    for i in range(N):

        in_neighbors  = np.nonzero(Adj[:, i])[0].tolist()
        out_neighbors = np.nonzero(Adj[i, :])[0].tolist()
        position = P[i, :].tolist()

        # guidance
        robot_launch.append(Node(
            package='choirbot_examples', executable='choirbot_taskassignment_guidance', output='screen',
            prefix=['xterm -hold -e'],
            namespace='agent_{}'.format(i),
            parameters=[{'agent_id': i, 'N': N, 'in_neigh': in_neighbors, 'out_neigh': out_neighbors}]))

        # planner
        robot_launch.append(Node(
            package='choirbot_examples', executable='choirbot_taskassignment_planner', output='screen',
            namespace='agent_{}'.format(i),
            parameters=[{'agent_id': i}]))
        
        # controller
        robot_launch.append(Node(
            package='choirbot_examples', executable='choirbot_taskassignment_controller', output='screen',
            namespace='agent_{}'.format(i),
            parameters=[{'agent_id': i}]))

        if i !=2:
            ble_device = ble_devices[i]
            launch_description.append(Node(
                package='choirbot_io',
                executable='ble_bridge',
                name=f'ble_bridge_agent_{i}',
                output='screen',
                parameters=[
                    {'cmd_topic': f'/agent_{i}/cmd_vel'},
                    {'ble_address': ble_device["address"]},
                    {'ble_uuid': ble_device["uuid"]}
                ]
            ))
        
        # turtlebot spawner

        if i ==2: #Only if its the third bot itll be spawned in gazebo
            launch_description.append(Node(
                package='choirbot_examples', executable='choirbot_turtlebot_spawner', output='screen',
                parameters=[{'namespace': 'agent_{}'.format(i), 'position': position}]))
    
    # include launcher for gazebo
    gazebo_launcher = os.path.join(get_package_share_directory('choirbot_examples'), 'gazebo.launch.py')
    launch_description.append(IncludeLaunchDescription(PythonLaunchDescriptionSource(gazebo_launcher)))
    
    # Add ArUco detector node
    launch_description.append(Node(
        package='choirbot_io',
        executable='aruco_detector',
        name='aruco_detector',
        output='screen'
    ))

    # Add Goal GUI node
    #launch_description.append(Node(
    #    package='choirbot_io',
    #    executable='goal_gui',
    #    name='goal_gui',
    #    output='screen'
    #))


    # include delayed robot executables
    timer_action = TimerAction(period=15.0, actions=[LaunchDescription(robot_launch)])
    launch_description.append(timer_action)
        
    return LaunchDescription(launch_description)
