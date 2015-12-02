#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
private:
	std::string name;
	char gender;
	int age;

public: 
	Person(std::string i_name, char i_gender, int i_age);

	std::string get_name();
	int get_age();
	char get_gender();
};

#endif