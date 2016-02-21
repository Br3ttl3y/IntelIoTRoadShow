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
	* This module was developed on the Seeed 6V Mini Water Pump.
	*
	* NOTE: You cannot just plug in the pump to the pump pin and expect it to work.
	* You have to have power and a relay of some sort to configure the ON/OFF
	* functionality of the pump.  Simply putting a pin to on on the VCC end of the pump
	* will not work.  You need the power PLUS the controller pin.
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
		static const int WATER_PUMP_PIN = 13;

		mraa_gpio_context waterPumpPin;
		mraa_result_t pumpStatus;
	};

#endif /* MINIWATERPUMP_HPP_ */
}
