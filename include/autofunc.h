#include "motorcopy.h"
#include "main.h"
const auto BAR = 14.5;
using namespace okapi;
//Aditya said don't use this
void dr4bControl(float inches)
{
    float inchesUp = 7.0*inches/2.0;
    float radians = inchesUp/BAR;
    double degrees = radians*(180/3.14159265);
    dr4b2.moveRelative(degrees, 70);
}

void releaseClaw()
{
    claw2.moveVelocity(-127);
    pros::delay(150);
    claw2.moveVelocity(0);

}
