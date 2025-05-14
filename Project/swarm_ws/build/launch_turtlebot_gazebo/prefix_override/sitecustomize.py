import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/user/Documents/NYU/Swarm/Swarm6333/Project/swarm_ws/install/launch_turtlebot_gazebo'
