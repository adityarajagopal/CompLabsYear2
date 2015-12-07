#include "complex.h"
#include "template.h"

int main() 
{
	my_complex<> z1(2.5, 3.2);
	my_complex<> z2(2.5, 3);
	double d = 5;

	std::cout << my_add(z1,z2) << std::endl;
	std::cout << my_add(d,z2) << std::endl;
	
	return 0;
}