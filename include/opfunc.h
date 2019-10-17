#include "main.h"
#include "motor.h"

#ifndef _PROS_OPFUNC_H_
#define _PROS_OPFUNC_H_

void dr4bControl(int y)
{
	dr4bR.moveVelocity(y);
	dr4bL.moveVelocity(y);
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
