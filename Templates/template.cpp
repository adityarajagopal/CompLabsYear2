#include "template.h"
#include <iostream>
#include <string>

int main()
{
	int i1 = 1, i2 = 2; 
	double d1 = 1.5, d2 = 2.2;
	std::string s1("1");
	std::string s2("2");

	my_swap(i1, i2);
	my_swap(d1, d2);
	my_swap(s1, s2);

	std::cout << i1 << " " << i2 << std::endl;
	std::cout << d1 << " " << d2 << std::endl;
	std::cout << s1 << " " << s2 << std::endl;

	return 0;
}