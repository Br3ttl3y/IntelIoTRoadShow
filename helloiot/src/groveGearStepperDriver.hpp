/*
 * groveGearStepperDriver.hpp
 *
 *  Created on: Feb 20, 2016
 *      Author: bcarroll
 */

#include <uln200xa.h>

namespace groveGearStepperDriver
{

#ifndef GROVEGEARSTEPPERDRIVER_HPP_
#define GROVEGEARSTEPPERDRIVER_HPP_

	/**
	* @brief Grove Gear Stepper Driver
	* @defgroup uln200xa libupm-uln200xa
	* @ingroup seeed gpio motor
	*/

	/**
	* @library groveGearStepperDriver
	* @sensor uln200xa
	* @comname Grove Gear Stepper Driver
	* @altname ULN2001A ULN2002A ULN2003A ULN2004A
	* @type stepper driver
	* @man seeed
	* @web http://www.seeedstudio.com/depot/Gear-Stepper-Motor-with-Driver-p-1685.html?cPath=39_40
	* @con uln200xa
	*
	* @brief Common Sense Library for the ULN200XA Darlington Stepper Driver
	*
	* This module was developed on a ULN2003A/28BYJ-48 Stepper Driver /Unipolar Stepper Motor Combo,
	*
	*/
	class GearStepperDriver
	{
	public:

		/**
		* Enum to define the rotation of the motor
		*/
		typedef enum
		{
			FULL_ROTATION = 4096,
			HALF_ROTATION = 2048,
			QUARTER_ROTATION = 1024,
			EIGHTH_ROTATION = 512
		} ROTATION;

		/**
		* Enum to define the relative speed of the motor
		*/
		typedef enum
		{
			FULL_SPEED = 468,
			HALF_SPEED = 234,
			QUARTER_SPEED = 117,
			EIGHTH_SPEED = 58
		} SPEED;

		/*
		 * Parameterless constructor for maximum laziness.
		 */
		GearStepperDriver();

		/**
		* Sets the speed and rotation of the stepper motor
		*
		* @param howFar four different increments (can be expanded later)
		*/
		void MoveFastestHalfWay();

	private:
		upm::ULN200XA* driver;

		static const int STEPS_FOR_MOTOR = 64;
		static const int PIN_1 = 2;
		static const int PIN_2 = 4;
		static const int PIN_3 = 7;
		static const int PIN_4 = 8;
	};

#endif /* GROVEGEARSTEPPERDRIVER_HPP_ */
}
