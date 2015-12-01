#include "stopwatch.h"
#include <iostream>

int main()
{
	stopwatch sw1(60);

	std::cout << sw1 << std::endl;

	int i=0;
	while(i < 3665)
	{
		sw1.increment();
		i++;
	}

	std::cout << sw1 << std::endl;

	return 0;
}