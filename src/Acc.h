#ifndef ACC_H_
#define ACC_H_

#include "MyRio.h"
#include <stdio.h>
#include "myWRIO.h"

namespace myWRIO {
	
	/**
	* Embedded accelerometer
	*/
	class Acc {
	public:
		Acc();
		~Acc();

		void x(double &v);
		void y(double &v);
		void z(double &v);
		void all(double &x, double &y, double& z);
	private:
		void readAcc(int, double&);
		double scale;
	};
}

/** \example example_acc.cpp */

#endif /* ACC_H_ */
