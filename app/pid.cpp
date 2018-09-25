/**
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
  k_p = 0.4;
  k_i = 0.1;
  k_d = 0.05;

  // set dt to small value, EXCEPT zero
  // for example dt = 0.4
  dt = 0.4;

  // integral and prevError can be initialized
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
  // Setting error and dervative to zero
  double error=0,derivative=0;
  // Calculation of the error
  error = vF - vI;
  // Calculation of the integral error
  integral +=error * dt;
  // Calculation of the derivative error
  derivative = (error - prevError)/dt;
  prevError = error;
  // Returning the Velocity
  return vI + k_p*error + k_i * integral + k_d * derivative;
}

