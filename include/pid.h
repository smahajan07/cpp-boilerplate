#ifndef PID_H_
#define PID_H_

#include<iostream>

class pidController{
  private:
    float k_p;
    float k_i;
    float k_d;
  public:
    float setpointVal;
    float initVel;
    float computeVelocity();
};

#endif

