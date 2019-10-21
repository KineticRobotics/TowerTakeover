
#include "main.h"
#include "autofunc.h"
using namespace okapi;
void autonomous() {
  dr4bL2.setReversed(true);
  right2.setReversed(true);
  //dr4bControl(63, 1000);
  releaseClaw();
  pros::lcd::set_text(1, "Exited");
  pros::delay(100);
  dr4bControl(4.0);
  pros::lcd::set_text(1,"exit func 2");
  pros::delay(2000);
  //PID.moveDistance(24_in);
  //pros::lcd::set_text(1, "exit func 3");

  /* NOT TESTED; PLAN FOR FIRST GAME
  dr4bL.moveVelocity(-200); //move dr4b up
  dr4bR.moveVelocity(200);
  pros::delay(1000);

  claw2 = 30;  //open claw a little

  dr4bL.moveVelocity(-200); //move dr4b down
  dr4bR.moveVelocity(200);
  pros::delay(1000);

  claw2 = 0; //close claw

  PIDsimple2.turnAngle(350); //IDK? Navigate cubes???
  PIDsimple2.moveDistance(30_in); //move toward goalzone

  claw2 = 40; //score???
  pros::delay(500);
  claw2 = 0;

  PIDsimple2.moveDistance(-5_in); //move backwards

 */

}
