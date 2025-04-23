# Swarm6333
Repo fot the Networked Robotics Systems, Cooperative Control and Swarming ROB-GY 6333 Class at NYU


For implementing the project the second time: 
1. conda deactivate
2. export ROS_DOMAIN_ID=30 #TURTLEBOT3
3. export TURTLEBOT3_MODEL=burger
4. export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/opt/ros/foxy/share/turtlebot3_gazebo/models
5. source ( or colcon build --symlink-install) and run it ~optional

```python
conda deactivate
cd Documents/NYU/Swarm/Swarm6333/Project/swarm_ws/
export ROS_DOMAIN_ID=30
export TURTLEBOT3_MODEL=burger
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/opt/ros/foxy/share/turtlebot3_gazebo/models
source install/setup.bash

```



To run: ros2 launch choirbot_examples taskassignment.launch.py

To edit with bot: turtlebot3_position_control_feedback.py file

--------------------------

For camera use

ros2 run aruco_opencv aruco_tracker_autostart --ros-args -p cam_base_topic:=image_raw -p marker_size:=0.15

ros2 launch usb_cam demo_launch.py 

in case use --ros-params for remapping
--------------------------------------

Install ROS2 Foxy on raspi

https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Configuring-ROS2-Environment.html