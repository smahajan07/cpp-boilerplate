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
#include "../include/pid.h"

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
  double count = 0;
  // Threshold for the
  double threshold = 0.01;
  // Asking the user to enter initial velocity and final velocity
  std::cout << "Please enter the initial velocity" << std::endl;
  std::cin >> vI;
  std::cout << "Please enter the final velocity" << std::endl;
  std::cin >> vF;

  pidController controller;
  // Loop is for computing velocity
  while (true) {
    // Calling the computeVelocity function
    vI = controller.computeVelocity(vI, vF);
    std::cout << "Current Velocity  : " << vI << "\t" << "Desired Velocity  : "
              << vF << std::endl;
    // Checking whether the current velocity has reached
    // +/- 0.01 of the desired velocity
    if ((vI >= vF - threshold) && (vI <= vF + threshold))
      count += 1;
    else
      count = 0;
    // If the velocity is within the threshold of the desired
    // velocity of 100 consecutive time it will break
    if ((count == 100) && ((vI >= vF - threshold) && (vI <= vF + threshold)))
      break;
  }
  std::cout << "Reach Final Velocity." << std::endl;
  return 0;
}
