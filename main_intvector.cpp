#include "intvector.h"
#include <iostream>

int main()
{
	int x = 1;
	intvector iv;

	std::cout << "code to test push_back" << std::endl;
	while(int(x))
	{
		std::cout << "Enter integer to add: " << std::endl;
		std::cin >> x;
		
		if(int(x))
			iv.push_back(x);
	} 

	std::cout << "code to test [] operator" << std::endl;
	std::cout << "&iv[0] " << &iv[0] << std::endl;

	std::cout << "code to test copy constructor" << std::endl;
	intvector v1(iv);
	std::cout << "&v1[0] " << &v1[0] << std::endl;

	std::cout << "code to test = operator" << std::endl;
	intvector v2;
	std::cout << "&v2[0] " << &v2[0] << std::endl;
	
	v2 = iv;
	std::cout << "v2[0] " << v2[0] << std::endl;
	std::cout << "&v2[0] " << &v2[0] << std::endl;

	std::cout << "code to test find() and at() methods" << std::endl;
	int index = v2.find(9);
	std::cout << index << std::endl;
	std::cout << v2.at(index) << std::endl;

	return 0;
}