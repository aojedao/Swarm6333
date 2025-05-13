# Networked Robotic Systems, Cooperative, Control and Swarming (ROB-GY 6333)

![NYU Tandon School of Engineering](https://engineering.nyu.edu/sites/default/files/wysiwyg-images/tandon_short_color.png)

## About the Project

This repository contains all the assignments and projects completed for the **Advanced Mechatronics (ROB-GY 6103)** course at NYU. The work was done collaboratively by our team, consisting of:
- **[Santiago Bernheim](https://github.com/santiagob)**
- **[Nishant Pushparaju](https://github.com/Nishant-ZFYII)**
- **[Alejandro Ojeda Olarte](https://github.com/aojedao)**
- **[Vivekanada Swamy](https://github.com/vivekmattam02)**

## Contents

**Final Project**
- **[Choirbot](https://github.com/OPT4SMART/ChoiRbot)**
- **[Advanced Mechatronics Final Project](https://github.com/aojedao/AdvancedMechatronics)**


## Getting Started

To explore the code and documentation for each homework or project, navigate to the respective folders in this repository. This project was built around the **ROS2** framework, and the code is organized into different packages for each package. The main one package is Choirbot, which contains distribution for robots, but it was optimized for task assignment and swarm behavior. The other packages are for the final project.

## Tools and Technologies
- **Arduino Nano BLE Sense**
- **Propeller 1 (Parallax)**

- Additional tools and software as required for specific assignments.

## Acknowledgments
Special thanks to the instructors and teaching assistants of the Advanced Mechatronics course for their guidance and support.

---

Useful commands and FAQ:


Repo for the Networked Robotics Systems, Cooperative Control and Swarming ROB-GY 6333 Class at NYU


For implementing the project: 
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
---------------------------

Installation of package on raspi

source /opt/ros/foxy/setup.bash
colcon build --symlink-install

errors:
run launch
no module disropt
install requirements_disropt-txt
error installing osqp

--fixed:

install only version from minimum requirements, still error on cvxp due to arm64, so install it manually as in:

sudo apt install libsuitesparse-dev
pip install cvxopt==1.2.3
and pip install disropt
--------------------------

For camera use

ros2 run aruco_opencv aruco_tracker_autostart --ros-args -p cam_base_topic:=image_raw -p marker_size:=0.15

ros2 launch usb_cam demo_launch.py 

in case use --ros-params for remapping
--------------------------------------

Install ROS2 Foxy on raspi

https://docs.ros.org/en/foxy/Tutorials/Beginner-CLI-Tools/Configuring-ROS2-Environment.html
