#include "person.h"

Person::Person(std::string i_name, char i_gender, int i_age):name(i_name), gender(i_gender), age(i_age) {}

std::string Person::get_name()
{
	return name;
}

char Person::get_gender()
{
	return gender;
}

int Person::get_age()
{
	return age;
}

