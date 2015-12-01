#ifndef DEVICES_H
#define DEVICES_H

#include "imp_device.h"

class Resistor : public Impedance_Device
{
private:
	double resistance;

public:
	Resistor(double r);

	std::complex<double> get_Impedance(double omega);
};

class Capacitor : public Impedance_Device
{
private:
	double capacitance;

public:
	Capacitor(double c);

	std::complex<double> get_Impedance(double omega);
};

class Inductor : public Impedance_Device
{
private:
	double inductance;

public:
	Inductor(double l);

	std::complex<double> get_Impedance(double omega);
};

#endif