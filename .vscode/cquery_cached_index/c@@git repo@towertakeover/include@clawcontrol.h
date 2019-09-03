#include "main.h"
#include "motor.h"

#ifndef _PROS_DR4BCONTROL_H_
#define _PROS_DR4BCONTROL_H

void clawControl(int stateIn, int stateOut){
	if (stateIn == 1 && stateOut == 0)
		claw = 127;

	else if (stateIn == 0 && stateOut == 1)
		claw = -63;

  else if (stateIn == 0 && stateOut == 0)
		claw = 0;
}

#endif
