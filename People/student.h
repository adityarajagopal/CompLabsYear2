#ifndef STUDENT_H
#define STUDENT_H

#include "collegeMember.h"
#include <string>

class Student : public CollegeMember
{	
private:
	std::string course;
	double GPA;

public:
	Student(	
		std::string name, 
		char gender, 
		int age, 
		std::string i_login,
		std::string i_department, 
		int i_ID,
		std::string i_course, 
		double i_GPA
	);
	
	std::string to_String() const; //virtual
	std::string get_course() const;
	double get_GPA() const; 

	double calculate_predicted_GPA() const;

};

#endif