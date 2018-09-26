/*
 * Copyright (c) 2018, Sarthak Mahajan
 * All rights reserved.
 *
 * Author: sarthak
 */

/** @file pid_test.cpp
 * @brief To test a PID controller
 *
 */

#include <gtest/gtest.h>
#include "../include/pid.h"

/**
 * @brief Unit test to check time interval dt
 *
 * test to ensure that the value of dt is not zero
 * to avoid division-by-zero error
 */

TEST(timeInterval, timeIntervalNotZero) {
  pidController obj1;
  EXPECT_NE(0, obj1.dt);
}

/**
 * @brief Unit test for compute method
 *
 * Test to check if compute function returns the
 * same velocity as desired velocity if their is
 * no error
 */

TEST(computeTest, noError) {
  pidController obj2;
  double vI = 10, vF = 10;
  EXPECT_EQ(vF, obj2.computeVelocity(vI, vF));
}
