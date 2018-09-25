/*
 * Copyright (c) 2018, Sarthak Mahajan
 * All rights reserved.
 *
 * Author: sarthak
 */

#ifndef INCLUDE_PID_H_
#define INCLUDE_PID_H_

#include <iostream>

class pidController{
  private:
    float k_p;
    float k_i;
    float k_d;
    double dt;
  public:
    pidController();
    double integral;
    double prevError;
    double computeVelocity(double& , double& );
};

#endif

