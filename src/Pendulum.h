#ifndef PENDULUM_H_
#define PENDULUM_H_

#include "myWRIO.h"
#include "Time.h"

namespace myWRIO {

class Pendulum {
public:
	Pendulum(double k1, double k2);

	double compute(double teta, double teta_p);
	void setSetpoint(double setpoint);

	~Pendulum();
private:
	double setpoint;

	double k1;
	double k2;

	const double tetaRef = 90;
};

} /* namespace myWRIO */

#endif /* PENDULUM_H_ */
