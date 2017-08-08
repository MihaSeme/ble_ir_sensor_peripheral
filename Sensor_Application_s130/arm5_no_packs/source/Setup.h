#ifndef BASKET_COUNTER_SETUP_H__
#define BASKET_COUNTER_SETUP_H__

#include "nrf.h"

#ifdef FORCE_CONFIG_PARAMETERS

	#define FORCE_SENSOR_DELAYS															0xFF
	#define FORCE_SENSOR_ID																	1
	
	
#endif

	
//#define DEVICE_NAME                    									SENSOR + "X"
#define DEVICE_NAME 																			COUNTER + "X"
#define DEFAULT_BASKET_COUNTER_ADVERTISING_INTERVAL				45
#define BLE_UUID_MY_BASE_UUID        							      {0x23, 0xD1, 0x13, 0xEF, 0x5F, 0x78, 0x23, 0x15, 0xDE, 0xEF, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00} // 128-bit base UUID
#define BLE_UUID_MY_SERVICE              							  0x9A4F // Just a random, but recognizable value
	


#endif