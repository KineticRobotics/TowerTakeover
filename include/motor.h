#include "main.h"
#include "okapi/api.hpp"
#ifndef _PROS_MOTOR_H_
#define _PROS_MOTOR_H

using namespace okapi;

pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor dr4b_left(15);
pros::Motor dr4b_right(16);
pros::Motor claw(8, true);

pros::Motor rightFront(10, true);
pros::Motor rightBack(20, true);
pros::Motor leftFront(1);
pros::Motor leftBack(11);


okapi:: MotorGroup right({11_rmtr, 20_rmtr});
okapi:: MotorGroup left({1, 10});

const auto WHEEL_DIAMETER = 4.25_in;
const auto CHASSIS_WIDTH = 13.5_in;
auto chassis = ChassisControllerFactory::create(
  left, right,
  AbstractMotor::gearset::green,
  {WHEEL_DIAMETER, CHASSIS_WIDTH}
);
Motor dr4bL = 15;
Motor dr4bR = 16;
auto dr4bLe = IntegratedEncoder(15);
auto dr4bRe = IntegratedEncoder(16);

// Arm related objects
//ADIButton armLimitSwitch('H');
ControllerButton armUpButton(ControllerDigital::R1);
ControllerButton armDownButton(ControllerDigital::R2);
ControllerButton clawIn(ControllerDigital::L1);
ControllerButton clawOut(ControllerDigital::L2);
Motor armMotor = 8_rmtr;


#endif
