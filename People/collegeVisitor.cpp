#include "collegeVisitor.h"
#include <sstream>


CollegeVisitor::CollegeVisitor(std::string name, char gender, int age, std::string i_purpose, int i_ID) :
	Person(name, gender, age),
	visitorID(i_ID), 
	purpose(i_purpose)
{}

int CollegeVisitor::get_ID() const {return visitorID;}

std::string CollegeVisitor::get_purpose() const {return purpose;}

std::string CollegeVisitor::to_String() const
{
	std::stringstream ss; 
	ss << Person::to_String() << " " << "Visitor ID: " << visitorID << " " << "Purpose of visit: " << purpose; 
	return ss.str();
}

