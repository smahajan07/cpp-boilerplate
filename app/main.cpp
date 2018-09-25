/*
 * Copyright (c) 2018, Sarthak Mahajan
 * All rights reserved.
 *
 * Author: sarthak
 */

/** @file main.cpp
 * @brief To utilize a PID controller for given
 *        initial velocity and desired velocity
 *
 * An object of pidController class is created
 * The program runs until the desired velocity
 * is achieved.
 */

#include <iostream>
#include "pid.h"

/**

 * @brief Asks user for initial and desired velocity
 *        and calls the compute velocity function of
 *        the object of PID controller class.
 *
 * @param none
 *
 * @return none

 */

int main() {
  double vI, vF;
  // Asking user for initial velocity and
  // desired velocity and desired velocity
  std::cout << "Please enter the initial velocity" << std::endl;
  std::cin >> vI;
  std::cout << "Please enter the final velocity" << std::endl;
  std::cin >> vF;

  pidController controller;

  while (true) {
    vI = controller.computeVelocity(vI, vF);
    std::cout << "Current Velocity  : " << vI << "\t" << "Desired Velocity  : "
              << vF << std::endl;
  }

  return 0;
}
