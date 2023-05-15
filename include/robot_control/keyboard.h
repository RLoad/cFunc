//|
//|    Copyright (C) 2021 Learning Algorithms and Systems Laboratory, EPFL, Switzerland
//|    Authors:  Patrick Sgrò (maintainer)
//|    email:    patrick.sgro@hotmail.com
//|    website:  lasa.epfl.ch
//|
#ifndef QP_CONTROLLERS_EXAMPLE_KEYBOARD_H
#define QP_CONTROLLERS_EXAMPLE_KEYBOARD_H

#include <ros/ros.h>

// std headers
#include <iostream>
#include <stdio.h>
#include <termios.h>

#include "Eigen/Eigen"

// namespace keyboard {
class Keyboard {
 public:
  static void nonblock_2(int state);
  static bool keyState_2(char key);
  static char get_char();

 protected:
  static int khbit_2();
  

};  // class Keyboard
// }  // namespace keyboard

float* findVelocities(float data[], int M, int N, int startPnts[], int K, float dt);
float* removeFinalDatasample(float data[], int M, int N, int startPnts[], int K);
float* cart2hyper(float data[], int M, int N);
float* hyper2cart(float hyper[], int M, int N);
float* cart2sphvel(float data[], float hyper[], float vel[], int M, int N, int startPnts[], int K);
float* sph2cartvel(float hyper[], float sphVel[], int M, int N);
Eigen::Matrix3f eul2rotmat(float x, float y, float z);
Eigen::Vector4f eul2quat(float yaw, float pitch, float roll);


#endif  // QP_CONTROLLERS_EXAMPLE_KEYBOARD_H