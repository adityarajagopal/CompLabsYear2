#include <fstream> 
#include <iostream> 

class Lockdb 
{
private:
	bool status; 

public:
	Lockdb(); 
	~Lockdb(); 

	bool get_status(); 
};