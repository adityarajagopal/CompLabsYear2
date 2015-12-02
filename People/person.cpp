#include "person.h"
#include <sstream>

Person::Person(std::string i_name, char i_gender, int i_age) : 
	name(i_name), 
	gender(i_gender), 
	age(i_age) 
{}

std::string Person::get_name() const
{
	return name;
}

char Person::get_gender() const
{
	return gender;
}

int Person::get_age() const
{
	return age;
}

std::string Person::to_String() const
{
	std::stringstream ss; 
	ss << "Name: " << name << " " << "Gender: " << gender << " " << "Age: " << age;
	return ss.str();
}

std::ostream& operator<<(std::ostream& os, const Person& p)
{
	os << p.to_String();
	return os;
}

