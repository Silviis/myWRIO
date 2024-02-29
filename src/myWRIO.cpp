#include "myWRIO.h"
#include "MyRio.h"

NiFpga_Status status = 0; /**< Initialize the status to 0 */

bool myWRIO::myRIO_init() {
	status = MyRio_Open();
	return MyRio_IsNotSuccess(status)?false:true;
}

bool myWRIO::myRIO_false() {
	return false;
}

bool myWRIO::myRIO_close() {
	status = MyRio_Close();
	return MyRio_IsNotSuccess(status)?false:true;
}

/*
 * Return true when there is an error
 */
bool myWRIO::myRIO_error() {
	return NiFpga_IsError(status);
}

