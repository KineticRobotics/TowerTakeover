#include "okapi/api.hpp"
using namespace okapi;
#include "main.h"
#include "opfunc.h"

okapi:: MotorGroup right({11, 20});
okapi:: MotorGroup left({1, 10});

const auto WHEEL_DIAMETER = 4.25_in;
const auto CHASSIS_WIDTH = 13.5_in;
auto chassis = ChassisControllerFactory::create(
  left, right,
  AbstractMotor::gearset::green,
  {WHEEL_DIAMETER, CHASSIS_WIDTH}
);
// Arm related objects
 ADIButton armLimitSwitch('H');
ControllerButton armUpButton(ControllerDigital::R1);
ControllerButton armDownButton(ControllerDigital::R2);
ControllerButton clawIn(ControllerDigital::L1);
ControllerButton clawOut(ControllerDigital::L2);
Motor armMotor = 8_rmtr;

void opcontrol() {
	dr4bControl(armUpButton.isPressed(), armDownButton.isPressed(), 0);
	clawControl(clawIn.isPressed(),  clawOut.isPressed());
  // Joystick to read analog values for tank or arcade control
  // Master controller by default
  Controller masterController;



  while (true) {
    // Tank drive with left and right sticks
    chassis.tank(masterController.getAnalog(ControllerAnalog::leftY),
               masterController.getAnalog(ControllerAnalog::rightY));

    pros::delay(10);
  }
}
