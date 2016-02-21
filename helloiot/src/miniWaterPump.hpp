/*
 * miniWaterPump.hpp
 *
 *  Created on: Feb 21, 2016
 *      Author: bcarroll
 */

#include "mraa.hpp"

namespace miniWaterPump{
#ifndef MINIWATERPUMP_HPP_
#define MINIWATERPUMP_HPP_

	/**
	* @brief 6V Mini Water Pump
	* @defgroup 114990073
	* @ingroup seeed water pump
	*/

	/**
	* @library miniWaterPump
	* @sensor 114990073
	* @comname 6V Mini Water Pump
	* @altname 114990073
	* @type water pump
	* @man seeed
	* @web http://www.seeedstudio.com/depot/6V-Mini-Water-Pump-p-1945.html
	* @con 114990073
	*
	* @brief Common Sense Library for the Seeed 6V Mini Water Pump
	*
	* This module was developed on the pump this is written for.
	*
	*/

	class WaterPump{
	public:
		/**
		* Enum to define the pump power state
		*/
		typedef enum
		{
			PUMP_OFF = 0,
			PUMP_ON = 1
		} POWER;

		/*
		 * Easy setup for your water pump
		 */
		WaterPump();

		/*
		 * Turns the pump on, it's your job to turn it off.
		 */
		void PumpOn();

		/*
		 * Turns the pump off, it's your job to turn it on.
		 */
		void PumpOff();

	private:
		static const int WATER_PUMP_PIN = 9;

		mraa_gpio_context waterPumpPin;
	};

#endif /* MINIWATERPUMP_HPP_ */
}
