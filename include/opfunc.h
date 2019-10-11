#include "main.h"
#include "motor.h"

#ifndef _PROS_OPFUNC_H_
#define _PROS_OPFUNC_H_

void dr4bControl(int stateUp, int stateDown, int cond)
{
	if(stateUp == 1 && stateDown == 0 && cond == 0) {
		dr4bL.moveVelocity(-200);
		dr4bR.moveVelocity(200);
	}

	else if(stateUp == 0 && stateDown == 1 && cond == 0){
		dr4bL.moveVelocity(200);
		dr4bR.moveVelocity(-200);
	}

/*
	else if(stateUp == 1 && stateDown == 0 && cond == 1){
		dr4bL.moveVelocity(-30);
		dr4bR.moveVelocity(30);
	}

	else if(stateUp == 0 && stateDown == 1 && cond == 1){
		dr4bL.moveVelocity(30);
		dr4bR.moveVelocity(-30);

	}

	*/

	else if(stateUp == 0 && stateDown == 0){
		dr4bL.moveVelocity(0);
		dr4bR.moveVelocity(0);
	}
}

void clawControl(int stateIn, int stateOut){
	if (stateIn == 1 && stateOut == 0)
		claw.moveVelocity(127);

	else if (stateIn == 0 && stateOut == 1)
		claw.moveVelocity(-63);

  else if (stateIn == 0 && stateOut == 0)
		claw.moveVelocity(0);
}

/*
void dr4bAngle(int angle){
	int point; int power; int scalar;
	if(angle<point){
		power = scalar*(angle/point);
		dr4bL.set(power);
		dr4bR.set(power);
		dr4b_left = power;
		dr4b_right = power;
	}
	else{
	}
}
*/

#endif
