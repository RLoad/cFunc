cmake_minimum_required(VERSION 2.8.3)

project(cFunc)

# Add support for c++11
add_definitions(-std=c++11 -O3)

# Find required packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy)

find_package(Eigen3 REQUIRED)
include_directories(
    ${catkin_INCLUDE_DIRS}
    ${EIGEN3_INCLUDE_DIRS}
)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS roscpp rospy
 )

include_directories(${EIGEN3_INCLUDE_DIR})
include_directories(include ${catkin_INCLUDE_DIRS})

# ---- add all func here
FILE(GLOB SRCS src/robot_control/keyboard.cpp)
FILE(GLOB INCS include/robot_control/keyboard.h)

#FILE(GLOB SRCS src/bifurcation_sample/transformations.cpp)
#FILE(GLOB INCS include/bifurcation_sample/transformations.h)


add_library(${PROJECT_NAME} ${SRCS} ${INCS})
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})


# add_executable(test_utils src/test_utils.cpp)
# target_link_libraries(test_utils ${catkin_LIBRARIES} ${PROJECT_NAME})
# add_dependencies(test_utils ${PROJECT_NAME}_gencpp)
