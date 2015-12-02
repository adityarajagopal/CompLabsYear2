#ifndef COLLEGEMEM_H
#define COLLEGEMEM_H

#include "person.h"
#include <string>

class CollegeMember : public Person
{
private:
	int ID; 
	std::string login;
	std::string department;

public:
	CollegeMember(std::string name, char gender, int age, std::string i_login, std::string i_department, int i_ID);

	std::string get_login() const;
	std::string get_dep() const;
	int get_ID() const; //virtual
	std::string to_String() const; //virtual
};

#endif