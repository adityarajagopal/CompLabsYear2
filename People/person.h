#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{
private:
	std::string name;
	char gender;
	int age;

public: 
	Person(std::string i_name, char i_gender, int i_age);

	std::string get_name() const;
	int get_age() const;
	char get_gender() const;

	virtual int get_ID() const =0; 
	virtual std::string to_String() const;

	friend std::ostream& operator<<(std::ostream& os, const Person& p);

	virtual ~Person() {};
};

#endif