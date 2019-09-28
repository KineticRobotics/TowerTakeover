//#include "okapi/api.hpp"
#include "main.h"
#include "opfunc.h"
//using namespace okapi;



void opcontrol() {

  // Joystick to read analog values for tank or arcade control
  // Master controller by default
  Controller masterController;



  while (true) {
    // Tank drive with left and right sticks
    chassis.tank(masterController.getAnalog(ControllerAnalog::leftY),
               masterController.getAnalog(ControllerAnalog::rightY));
    dr4bControl(armUpButton.isPressed(), armDownButton.isPressed(), 0);
    clawControl(clawIn.isPressed(), clawOut.isPressed());
    pros::delay(10);
  }
}
