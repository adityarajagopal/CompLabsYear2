#include "lockdb.h"

Lockdb::Lockdb()
{
	std::ifstream ifile(".lockdb");

	if(ifile.is_open())
	{
		std::cout << "resource is busy" << std::endl;
		status = false;	
	}

	else
	{
		std::ofstream ofile(".lockdb");
		if(!ofile.is_open())
			throw std::runtime_error("couldn't lock resource");

		ofile.close(); 
		std::cout << "resource is locked" << std::endl;
		status = true;
	}
}

Lockdb::~Lockdb()
{
	std::cout << "destructor" << std::endl;
	if(status)
	{
		remove(".lockdb");
		std::cout << "resource is unlocked" << std::endl;	
	}
}

bool Lockdb::get_status()
{
	return status;
}