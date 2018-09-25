/**
 * Copyright (c) 2018, Sarthak Mahajan
 * All rights reserved.
 *
 * Author: sarthak
 */

#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_

#include <iostream>
/**
 * @brief Class to compute velocty using PID controller
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
class pidController{
  private:
    float k_p;
    float k_i;
    float k_d;
  public:
    pidController();
    double dt;
    double integral;
    double prevError;
    double computeVelocity(double& , double& );
};

#endif

