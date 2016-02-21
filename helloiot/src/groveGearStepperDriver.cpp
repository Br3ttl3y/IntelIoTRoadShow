/*
* groveGearStepperDriver.cpp
*
*  Created on: Feb 20, 2016
*      Author: bcarroll
*/

#include "groveGearStepperDriver.hpp"

namespace groveGearStepperDriver
{
	GearStepperDriver::GearStepperDriver() {
		driver = new upm::ULN200XA(STEPS_FOR_MOTOR, PIN_1, PIN_2, PIN_3, PIN_4);
	}

	void GearStepperDriver::MoveFastestHalfWay() {
		driver->setSpeed(FULL_SPEED);
		driver->stepperSteps(HALF_ROTATION);
	}

	// TODO Other speeds and rotations.
}


