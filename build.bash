#!/bin/bash

cd /turtlebot3_ws \
     && . /opt/ros/noetic/setup.sh \
     && catkin_make
   
exec bash
cd /UR_ws \
     && . /opt/ros/noetic/setup.sh \
     && catkin_make
   
exec bash
