/*
 * Author: Brett Carroll <brett.carroll@gmail.com>
 * Copyright (c) 2015 Intel Corporation.
 *
 * SOFTWARE AS IS - NO WARRANTY.
 */

/**
 * @file
 * @ingroup basic
 * @brief Move a motor and pump
 *
 * The configuration of your board is your responsibility and is done through
 * the header files of this program.
 *
 * @date 2/20/16
 */

#include "groveGearStepperDriver.hpp"
#include "miniWaterPump.hpp"

int main()
{
	// This is how you move the motor after it is hooked up correctly
	// for more information on "correctly" see hpp files.
	groveGearStepperDriver::GearStepperDriver driver = groveGearStepperDriver::GearStepperDriver();
	driver.MoveSlowlyDumpSeeds();

	// This is how you control the pump.
	// Make sure you have it hooked up correctly as well.
	// Again, see hpp files for help
	miniWaterPump::WaterPump pump = miniWaterPump::WaterPump();
	pump.PumpOn();
	pump.PumpOff();

	return mraa::SUCCESS;
}
