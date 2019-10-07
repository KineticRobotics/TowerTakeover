
#include "main.h"
#include "motorcopy.h"
//#include "opfunc.h" for some reason including anything that includes motor.h is a problem? it says it instantiates it twice? otherwise this works if you uncomment this and pidsimple move
/*
pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor dr4b_left(15);
pros::Motor dr4b_right(16);
pros::Motor claw(8, true);
pros::Motor rightFront(10, true);
pros::Motor rightBack(20, true);
pros::Motor leftFront(1);
pros::Motor leftBack(11);
*/


void autonomous() {
  PIDsimple2.moveDistance(24_in);

  dr4b_left2 = -127; //move dr4b up
  dr4b_right2 = 127;
  pros::delay(1000);

  claw2 = 30;  //open claw a little

  dr4b_left2 = 127; //move dr4b down
  dr4b_right2 = -127;
  pros::delay(1000);

  claw2 = 0; //close claw

  PIDsimple2.turnAngle(350); //IDK? Navigate cubes???
  PIDsimple2.moveDistance(30_in); //movve toward goalzone

  claw2 = 40; //score???
  pros::delay(500);
  claw2 = 0;

  PIDsimple2.moveDistance(-5_in); //move backwards
}
