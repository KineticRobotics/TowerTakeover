#include "main.h"
#include "motor copy.h"
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
    PIDsimple2.moveDistance(1080);
}
