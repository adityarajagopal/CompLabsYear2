#ifndef COLLEGEVIS_H
#define COLLEGEVIS_H

#include "person.h"
#include <string>

class CollegeVisitor : public Person
{
private:
	int visitorID; 
	std::string purpose;

public:
	CollegeVisitor(std::string name, char gender, int age, std::string i_purpose, int i_ID);

	int get_ID() const; //virtual
	std::string get_purpose() const;
	std::string to_String() const; //virtual
};

#endif