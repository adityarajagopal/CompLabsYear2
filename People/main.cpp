#include "collegeVisitor.h"
#include "collegeMember.h"
#include "student.h"
#include "person.h"
#include <vector>
#include <string>
#include <iostream>

int main()
{
	std::vector<Person*> people;
	Person* tmp_person;

	tmp_person = new CollegeMember("Dave Chapelle", 'm', 49, "dc14", "EEE", 100000);
	people.push_back(tmp_person);

	tmp_person = new CollegeVisitor("Jane Doe", 'f', 23, "interview", 200000);
	people.push_back(tmp_person);

	tmp_person = new Student("John Diggle", 'm', 19, "jd114", "EEE", 100001, "Electrical and Electronics Engineering", 3.9);
	people.push_back(tmp_person);

	for(int i=0; i<people.size(); i++)
		std::cout << *people[i] << std::endl;

	return 0;
}