
#include "main.h"
#include "motorcopy.h"

void autonomous() {
  //PIDsimple2.moveDistance(24_in);
  right2.setReversed(true);
  PIDsimple2.moveDistance(24_in);
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
