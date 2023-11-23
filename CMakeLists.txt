cmake_minimum_required(VERSION 3.0.2)
project(trial_pkg)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

set(CMAKE_PREFIX_PATH "/opt/ros/noetic")
set(CMAKE_MODULE_PATH "${CMAKE_PREFIX_PATH}/share/catkin/cmake")

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rosbag
  rostime
  cv_bridge
  image_transport
  rospy
  std_msgs
  sensor_msgs
  message_generation
  message_filters
  tf
  tf_conversions
)

find_package(PCL REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(jsoncpp REQUIRED)
find_package(Ceres REQUIRED)

generate_messages(
  DEPENDENCIES
  std_msgs
  sensor_msgs
)

catkin_package(
#  INCLUDE_DIRS include
  CATKIN_DEPENDS rospy std_msgs sensor_msgs
  message_runtime
  cv_bridge
  image_transport
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  ../../devel/include
  ${catkin_INCLUDE_DIRS}
  ${PCL_INCLUDE_DIRS}
  ${OPENCV_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIRS}
  ${CERES_INCLUDE_DIRS}
)

add_executable(ceres_test src/ceres_test.cpp)
target_link_libraries(ceres_test ${catkin_LIBRARIES} ${CERES_LIBRARIES})