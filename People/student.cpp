#include "student.h"
#include <sstream>

Student::Student(
		std::string name, 
		char gender, 
		int age, 
		std::string i_login,
		std::string i_department, 
		int i_ID,
		std::string i_course, 
		double i_GPA
	):
	CollegeMember(name, gender, age, i_login, i_department, i_ID),
	course(i_course), 
	GPA(i_GPA)
{}

std::string Student::to_String() const
{
	std::stringstream ss; 
	ss << CollegeMember::to_String() << " " << "Course: " << course << " " << "GPA: " << GPA;
	return ss.str();
}

std::string Student::get_course() const 
{
	return course; 
}

double Student::get_GPA() const 
{
	return GPA;
}



