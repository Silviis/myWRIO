#ifndef MYWRIO_H
#define MYWRIO_H

#include <functional>
#include <iostream>
#include <math.h>
#include "MyRio.h"

#include "Acc.h"
#include "DIO.h"
#include "AIO.h"
#include "Encoder.h"
#include "Gyro.h"
#include "I2C.h"
#include "PWM.h"
#include "Time.h"
#include "Wifi.h"
#include "Motor.h"
#include "MotorPID.h"
#include "Pendulum.h"
#include "Log.h"



namespace myWRIO {
	bool myRIO_false();
	bool myRIO_init();
	bool myRIO_close();
	bool myRIO_error();

	static NiFpga_Status status; /**< This global variable allow the user to keep track of errors if not 0. */


/**
 * This function can be used to print each bit of an unsigned char
 * @param byte The byte to print
 * @return An empty string, for convenience : cout << "Bytes : " << printBits(var) << endl;
 */
static std::string printBits(uint8_t byte) {
	for(int i=7; i>=0; i--)
		std::cout << ((byte & (1 << i)) != 0)?'1':'0';
	return "";
}

}

#endif
