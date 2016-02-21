/*
 * miniWaterPump.cpp
 *
 *  Created on: Feb 21, 2016
 *      Author: bcarroll
 */

#include "miniWaterPump.hpp"

namespace miniWaterPump{

	WaterPump::WaterPump(){
		mraa_init();
		waterPumpPin = mraa_gpio_init(WATER_PUMP_PIN);
		mraa_gpio_dir(waterPumpPin, MRAA_GPIO_OUT_HIGH);
	}

	void WaterPump::PumpOn(){
		mraa_gpio_write(waterPumpPin, PUMP_ON);
	}

	void WaterPump::PumpOff(){
		mraa_gpio_write(waterPumpPin, PUMP_OFF);
	}
}


