/*
 * Copyright (c) 2018, Sarthak Mahajan
 * All rights reserved.
 *
 * Author: sarthak
 */

/** @file pid.cpp
 * @brief To create a PID controller for given
 *        initial velocity and desired velocity
 *
 * An object of pidController class is created
 * and we can initialize the control parameters.
 * The program runs until the desired velocity
 * is achieved.
 */

#include "pid.h"


/**

 * @brief Constructor is used to set the gains for
 *        the system
 *
 * @param k_p   Proportional gain
 * @param k_i   Integral gain
 * @param k_d   Derivative gain
 * @param dt    time step
 * @param integral integral term is the one that takes
 *                 care of accumulated error
 * @param prevError this term is to keep a tab of the
 *                  previous error so as to calculate the
 *                  gradient of error
 *
 * @return none

 */
pidController::pidController(){
  // set values of the gains
  k_p = 0.0;
  k_i = 0.0;
  k_d = 0.0;

  // set dt to small value, EXCEPT zero
  // for example dt = 0.4
  dt = 0.0;

  // integral and prevError can be intialized
  // to zero
  integral = 0;
  prevError = 0;


}

/**

 * @brief function to compute the velocity given
 *        the knowledge of gains and provided with
 *        the initial velocity and desired velocity
 *
 * @param vI  initial velocity
 * @param vF  final/desired velocity

 * @return computed velocity

 */
double pidController::computeVelocity(double& vI, double& vF){
  // WRITE YOUR CODE HERE

  return 0;
}

