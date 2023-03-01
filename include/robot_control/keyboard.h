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


#endif  // QP_CONTROLLERS_EXAMPLE_KEYBOARD_H