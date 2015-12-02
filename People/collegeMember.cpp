#include "collegeMember.h"
#include <sstream>

//
CollegeMember::CollegeMember(std::string name, char gender, int age, std::string i_login, std::string i_department, int i_ID) : 
	Person(name, gender, age),
	login(i_login), 
	department(i_department), 
	ID(i_ID) 
{}

//methods
std::string CollegeMember::get_login() const {return login;}
std::string CollegeMember::get_dep() const {return department;}

//virtual
int CollegeMember::get_ID() const {return ID;} 
std::string CollegeMember::to_String() const
{
	std::stringstream ss; 
	ss << Person::to_String() << " " << "College ID: " << ID << " " << "College Login: " << login << " " << "Department: " << department;
	return ss.str();
}




