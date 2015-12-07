#include <fstream> 
#include <iostream> 

#include "lockdb.h"

bool update_db(int data);
void write_db();

int main()
{
	try
	{
		update_db(1);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

void write_db(int data) 
{
	throw std::exception(); 
}

bool update_db(int data)
{
	bool exit_code; 
	Lockdb ldb; 

	if(ldb.get_status())
	{
		std::cout << "doing operations" << std::endl;
		write_db(1);
		exit_code = true;
	}
	else
		exit_code = false;

	return exit_code;
}