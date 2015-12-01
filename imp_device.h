#ifndef IMP_DEVICE_H
#define IMP_DEVICE_H

#include <complex>

class Impedance_Device
{
public:
	virtual std::complex<double> get_Impedance(double omega) =0;

	virtual ~Impedance_Device() {};
};

#endif