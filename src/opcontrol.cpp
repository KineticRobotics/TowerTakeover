#include "main.h"

pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor dr4b_left(15);
pros::Motor dr4b_right(16);
pros::Motor claw(8, true);

pros::Motor rightFront(10, true);
pros::Motor rightBack(20, true);
pros::Motor leftFront(1);
pros::Motor leftBack(11);

void dr4bControl(int stateUp, int stateDown, int cond)
{
	if(stateUp == 1 && stateDown == 0 && cond == 0) {
		dr4b_left = -127;
		dr4b_right = 127;
	}

	else if(stateUp == 0 && stateDown == 1 && cond == 0){
		dr4b_left = 127;
		dr4b_right = -127;
	}

	else if(stateUp == 1 && stateDown == 0 && cond == 1){
		dr4b_left = -30;
		dr4b_right = 30;
	}

	else if(stateUp == 0 && stateDown == 1 && cond == 1){
		dr4b_left = 30;
		dr4b_right = -30;
	}

	else if(stateUp == 0 && stateDown == 0){
		dr4b_left = 0;
		dr4b_right = 0;
	}
}

void clawControl(int stateIn){
	if (stateIn == 1)
		claw = 80;

	else if (stateIn == 0)
		claw = 0;
}

void opcontrol() {
	while (true) {
		dr4bControl(master.get_digital(DIGITAL_R1), master.get_digital(DIGITAL_R2), master.get_digital(DIGITAL_L1));
		clawControl(master.get_digital(DIGITAL_L2));
		leftFront = master.get_analog(ANALOG_LEFT_Y);
		leftBack = master.get_analog(ANALOG_LEFT_Y);
		rightFront = master.get_analog(ANALOG_RIGHT_Y);
		rightBack = master.get_analog(ANALOG_RIGHT_Y);
	}
}
