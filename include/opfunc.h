#include "main.h"
#include "motor.h"

#ifndef _PROS_OPFUNC_H_
#define _PROS_OPFUNC_H_

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

void clawControl(int stateIn, int stateOut){
	if (stateIn == 1 && stateOut == 0)
		claw = 127;

	else if (stateIn == 0 && stateOut == 1)
		claw = -63;

  else if (stateIn == 0 && stateOut == 0)
		claw = 0;
}

#endif
