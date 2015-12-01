#include "devices.h"

Resistor::Resistor(double r) : resistance(r) {}

std::complex<double> Resistor::get_Impedance(double omega)
{
	std::complex<double> impedance(resistance);
	return impedance;
}

Capacitor::Capacitor(double c) : capacitance(c) {}

std::complex<double> Capacitor::get_Impedance(double omega)
{
	std::complex<double> impedance(0, -1/(omega*capacitance));
	return impedance;
}

Inductor::Inductor(double l) : inductance(l) {}

std::complex<double> Inductor::get_Impedance(double omega)
{
	std::complex<double> impedance(0, (omega*inductance));
	return impedance;
}