#include "devices.h"
#include <iostream>
#include <vector>
#include <fstream>

int main()
{
	std::vector<Impedance_Device*> circuit;
	Impedance_Device* tmp_id;
	char deviceType;
	double tmp_rlc;
	std::ifstream ipfile;
	double freq;

	ipfile.open("devices.txt");

	while(ipfile >> deviceType >> tmp_rlc)
	{
		if(deviceType != 'f')
		{
			if(deviceType == 'r')
				tmp_id = new Resistor(tmp_rlc); 

			else if(deviceType == 'l')
				tmp_id = new Inductor(tmp_rlc);

			else if(deviceType == 'c')
				tmp_id = new Capacitor(tmp_rlc);

			circuit.push_back(tmp_id);
		}

		else
			freq = tmp_rlc;

	}

	for(int i=0; i<circuit.size(); i++)
	{
		std::cout << "impedance " << i+1 << ": ";
		std::cout << circuit[i]->get_Impedance(freq * 6.28) << std::endl;		
	}

	for(int i=0; i<circuit.size(); i++)
		delete circuit[i];

	return 0;
}