/*
 * miniWaterPump.cpp
 *
 *  Created on: Feb 21, 2016
 *      Author: bcarroll
 */

#include "miniWaterPump.hpp"

namespace miniWaterPump{

	WaterPump::WaterPump(){
		relay = new upm::GroveRelay(WATER_PUMP_PIN);

		mraa_init();
		waterPumpPin = mraa_gpio_init(WATER_PUMP_PIN);
		pumpStatus = mraa_gpio_dir(waterPumpPin, MRAA_GPIO_OUT);
	}

	void WaterPump::PumpOn(){
		int pumpDuration = 2;

		relay->on();
		sleep(pumpDuration);
	}

	void WaterPump::PumpOff(){
		relay->off();
	}
}


