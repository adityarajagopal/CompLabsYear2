#include "devices.h"
#include <iostream>
#include <vector>

int main()
{
	std::vector<Impedance_Device*> circuit;
	Impedance_Device* tmp_id;
	char deviceType;
	double tmp_rlc;
	int numDevices;
	double freq;

	std::cout << "number of devices = ";
	std::cin >> numDevices;

	for(int i=0; i<numDevices; i++)
	{
		std::cout << "device type (r/c/l) = ";
		std::cin >> deviceType;

		if(deviceType == 'r')
		{
			std::cout << "resistance = ";
			std::cin >> tmp_rlc;
			tmp_id = new Resistor(tmp_rlc); 
		}

		else if(deviceType == 'l')
		{
			std::cout << "inductance = ";
			std::cin >> tmp_rlc;
			tmp_id = new Inductor(tmp_rlc);
		}

		else
		{
			std::cout << "capacitance = ";
			std::cin >> tmp_rlc;
			tmp_id = new Capacitor(tmp_rlc);
		}

		circuit.push_back(tmp_id);
	}

	std::cout << "frequency = ";
	std::cin >> freq;

	for(int i=0; i<numDevices; i++)
	{
		std::cout << "impedance " << i+1 << ": ";
		std::cout << circuit[i]->get_Impedance(freq * 6.28) << std::endl;		
	}

	for(int i=0; i<numDevices; i++)
		delete circuit[i];

	return 0;
}