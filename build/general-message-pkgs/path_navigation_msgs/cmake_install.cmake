# Install script for directory: /UR_ws/src/general-message-pkgs/path_navigation_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/UR_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/path_navigation_msgs/action" TYPE FILE FILES
    "/UR_ws/src/general-message-pkgs/path_navigation_msgs/action/PathExecution.action"
    "/UR_ws/src/general-message-pkgs/path_navigation_msgs/action/TransformPathExecution.action"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/path_navigation_msgs/msg" TYPE FILE FILES
    "/UR_ws/devel/share/path_navigation_msgs/msg/PathExecutionAction.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/PathExecutionActionGoal.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/PathExecutionActionResult.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/PathExecutionActionFeedback.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/PathExecutionGoal.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/PathExecutionResult.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/PathExecutionFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/path_navigation_msgs/msg" TYPE FILE FILES
    "/UR_ws/devel/share/path_navigation_msgs/msg/TransformPathExecutionAction.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/TransformPathExecutionActionGoal.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/TransformPathExecutionActionResult.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/TransformPathExecutionActionFeedback.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/TransformPathExecutionGoal.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/TransformPathExecutionResult.msg"
    "/UR_ws/devel/share/path_navigation_msgs/msg/TransformPathExecutionFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/path_navigation_msgs/cmake" TYPE FILE FILES "/UR_ws/build/general-message-pkgs/path_navigation_msgs/catkin_generated/installspace/path_navigation_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/UR_ws/devel/include/path_navigation_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/UR_ws/devel/share/roseus/ros/path_navigation_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/UR_ws/devel/share/common-lisp/ros/path_navigation_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/UR_ws/devel/share/gennodejs/ros/path_navigation_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/UR_ws/devel/lib/python3/dist-packages/path_navigation_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/UR_ws/devel/lib/python3/dist-packages/path_navigation_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/UR_ws/build/general-message-pkgs/path_navigation_msgs/catkin_generated/installspace/path_navigation_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/path_navigation_msgs/cmake" TYPE FILE FILES "/UR_ws/build/general-message-pkgs/path_navigation_msgs/catkin_generated/installspace/path_navigation_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/path_navigation_msgs/cmake" TYPE FILE FILES
    "/UR_ws/build/general-message-pkgs/path_navigation_msgs/catkin_generated/installspace/path_navigation_msgsConfig.cmake"
    "/UR_ws/build/general-message-pkgs/path_navigation_msgs/catkin_generated/installspace/path_navigation_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/path_navigation_msgs" TYPE FILE FILES "/UR_ws/src/general-message-pkgs/path_navigation_msgs/package.xml")
endif()

