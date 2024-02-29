#ifndef WIFI_H
#define WIFI_H

#include "myWRIO.h"
#include <unistd.h> // read
#include <sys/socket.h> // bind, connect...
#include <netinet/in.h> // sockaddr_in
#include <thread>
#include <iostream>
#include <sys/ioctl.h>
#include <cstdio> // perror

namespace myWRIO {
	
	/**
	* Use this class to exchange data via wifi
	*/
	class Wifi {
	public:
		Wifi(std::function<void(long)> func);
		~Wifi();
		
		void openServer();
		bool isConnected();
		void updateAngle(short angle);

	private:
		bool connected;
		int _socket;
		std::thread _socketThread;
		std::function<void(long)> _func; /**< Function to call when receiving data */

		void writeChar(char c);
		void writeShort(short s);
		void writeLong(long l);
	};
}


#endif
