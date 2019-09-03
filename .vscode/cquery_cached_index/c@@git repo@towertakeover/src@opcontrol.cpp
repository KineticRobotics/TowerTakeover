#include "main.h"

//#include "motor.h"
#include "opfunc.h"

void opcontrol() {
	while (true) {
		dr4bControl(master.get_digital(DIGITAL_R1), master.get_digital(DIGITAL_R2), 0);
		clawControl(master.get_digital(DIGITAL_L2),  master.get_digital(DIGITAL_L1));
		leftFront = master.get_analog(ANALOG_LEFT_Y);
		leftBack = master.get_analog(ANALOG_LEFT_Y);
		rightFront = master.get_analog(ANALOG_RIGHT_Y);
		rightBack = master.get_analog(ANALOG_RIGHT_Y);
	}
}
