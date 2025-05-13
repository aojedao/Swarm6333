#!/usr/bin/env python3
#
# Copyright 2019 ROBOTIS CO., LTD.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# Authors: Ryan Shim, Gilbert

import numpy as np

from geometry_msgs.msg import Twist, Point
from rclpy.node import Node
from rclpy.qos import QoSProfile
from choirbot.utils.position_getter import pose_subscribe
from choirbot import Pose


class Turtlebot3Feedback(Node):

    def __init__(self, robot_id, pose_handler: str=None, pose_topic: str=None):
        super().__init__('agent_{}_turtlebot3_position_control'.format(robot_id))
        
        self.max_omega = 5.0  # Maximum angular velocity in rad/s


        """************************************************************
        ** Initialise variables
        ************************************************************"""
        self.last_pose_x = 0.0
        self.last_pose_y = 0.0
        self.current_pose = Pose(None, None, None, None)
        self.goal_pose_x = None
        self.goal_pose_y = None
        self.goal_pose_theta = None
        self.delta = 0.0
        self.delta_old = 0.0
        self.delta_old_old = 0.0
        self.yaw = 0.0
        self.yaw_old = 0.0
        self.yaw_old_old = 0.0
        self.k1 = 4 # linear velocity gain
        self.k2 = 15 # Angular velocity gain
        self.init_odom_state = False  # To get the initial pose at the beginning
        self.robot_id = robot_id
        self.goal_point = None
        
        # Gains for pose control (from unicycle_pose)
        self.k3_far = 0.2
        self.k3_near = 0.1
        self.min_velocity = 0.02
        self.max_velocity = 0.1
        self.target_tolerance = 0.02


        
        
        """************************************************************
        ** Initialise ROS publishers and subscribers
        ************************************************************"""
        qos = QoSProfile(depth=10)

        # Initialise publishers
        self.cmd_vel_pub = self.create_publisher(Twist, '/agent_{}/cmd_vel'.format(robot_id), qos)

        # Initialise subscribers
        self.position_sub = pose_subscribe(pose_handler, pose_topic, self, self.current_pose, self.pose_callback)

        self.goal_sub = self.create_subscription(
            Point,
            '/agent_{}/goal'.format(self.robot_id),
            self.goal_callback,
            qos)

        """************************************************************
        ** Initialise timers
        ************************************************************"""
        self.update_timer = self.create_timer(0.010, self.update_callback)  # unit: s

        self.get_logger().info("Turtlebot3 position control node (Agent {}) has been initialised.".format(robot_id))

    """*******************************************************************************
    ** Callback functions and relevant functions
    *******************************************************************************"""
    def pose_callback(self):
        self.last_pose_x = self.current_pose.position[0]
        self.last_pose_y = self.current_pose.position[1]
        self.euler_from_quaternion(self.current_pose.orientation)

        self.init_odom_state = True

    def update_callback(self):
        if self.init_odom_state is True:
            self.generate_path()
    
    def generate_path(self):
        twist = Twist()

        if self.goal_pose_x is not None:
            # Step 1: Turn
            r = (np.sqrt((self.goal_pose_x - self.last_pose_x)**2 + (self.goal_pose_y - self.last_pose_y)**2))

            v = min(0.02, r)

            delta_new = -np.arctan2((self.goal_pose_y-self.last_pose_y),(self.goal_pose_x-self.last_pose_x))+self.yaw
            delta_array = np.array([self.delta_old_old, self.delta_old, delta_new])
            delta_array_new = np.unwrap(delta_array)

            # shift value of variables
            self.delta, self.delta_old, self.delta_old_old = delta_array_new[2], self.delta, self.delta_old

            omega = -(v/r)*(self.k2*(self.delta-np.arctan(-self.k1*self.goal_pose_theta)) + (1+ self.k1/(1 + (self.k1*self.goal_pose_theta)*(self.k1*self.goal_pose_theta)))*np.sin(self.delta))
            
            # Cap the angular velocity
            omega = np.clip(omega, -self.max_omega, self.max_omega)
            v = np.clip(np.linalg.norm(r)*1, 0.01, 0.2)
            # Step 2: Move
            if r < 0.05:
                current_pos = np.array([self.last_pose_x, self.last_pose_y])
                self.get_logger().info('Reached goal - position {}'.format(current_pos))
                twist.linear.x = 0.00
                twist.linear.y = 0.00
                twist.angular.z = 0.00
                self.goal_pose_x = None
                self.goal_pose_y = None
                self.get_logger().info('Sending 0 vel to ID {}'.format(self.robot_id))
                self.cmd_vel_pub.publish(twist)
            else:
                twist.linear.x = v
                twist.angular.z = omega

            self.cmd_vel_pub.publish(twist)
    '''
    uncomment this and comment the above function to use the unicycle pose control
    
    def generate_path(self):
        twist = Twist()

        if self.goal_pose_x is not None and self.goal_pose_y is not None:
            goal = np.array([self.goal_pose_x, self.goal_pose_y])
            current = np.array([self.last_pose_x, self.last_pose_y])
            dx, dy = goal - current
            rho = np.linalg.norm([dx, dy])

            # Avoid division by zero
            if rho < 1e-5:
                rho = 1e-5

            # Control law (same logic from unicycle_pose.py)
            alpha = -np.arctan2(dy, dx) + self.yaw
            beta = -self.yaw - alpha

            alpha = np.arctan2(np.sin(alpha), np.cos(alpha))
            beta = np.arctan2(np.sin(beta), np.cos(beta))

            v = np.clip(self.k3_far * rho, self.min_velocity, self.max_velocity)
            omega = -(v / rho) * (self.k2 * (alpha - np.arctan(-self.k1 * 0.0)) + 
                                (1 + self.k1 / (1 + (self.k1 * 0.0) ** 2)) * np.sin(alpha))

            if rho < self.target_tolerance:
                twist.linear.x = 0.0
                twist.angular.z = 0.0
                self.get_logger().info(f"Reached goal at {goal}")
                self.goal_pose_x = None
                self.goal_pose_y = None
            else:
                twist.linear.x = v
                twist.angular.z = omega

            self.cmd_vel_pub.publish(twist)
    '''

    
    
    def goal_callback(self, msg):
        # Print terminal message and get inputs
        goal = np.array([msg.x, msg.y])
        self.get_logger().info('Goal: {}'.format(goal))
        self.goal_pose_x = msg.x
        self.goal_pose_y = msg.y
        self.goal_pose_theta = 0.0

    """*******************************************************************************
    ** Below should be replaced when porting for ROS 2 Python tf_conversions is done.
    *******************************************************************************"""
    def euler_from_quaternion(self, quat):
        """
        Converts quaternion (w in last place) to euler roll, pitch, yaw
        quat = [x, y, z, w]
        """
        x = quat[0]
        y = quat[1]
        z = quat[2]
        w = quat[3]

        # sinr_cosp = 2 * (w*x + y*z)
        # cosr_cosp = 1 - 2*(x*x + y*y)
        # roll = np.arctan2(sinr_cosp, cosr_cosp)

        # sinp = 2 * (w*y - z*x)
        # pitch = np.arcsin(sinp)

        siny_cosp = 2 * (w*z + x*y)
        cosy_cosp = 1 - 2 * (y*y + z*z)
        yaw_new = np.arctan2(siny_cosp, cosy_cosp)
        yaw_array = np.array([self.yaw_old_old, self.yaw_old, yaw_new])
        yaw_array_new = np.unwrap(yaw_array)

        # shift value of variables
        self.yaw, self.yaw_old, self.yaw_old_old = yaw_array_new[2], self.yaw, self.yaw_old
