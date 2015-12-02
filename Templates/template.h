#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>

template <typename Type>
void my_swap(Type& a, Type& b)
{
	Type c;
	c = a;
	a = b; 
	b = c;
}

template <typename T>
T my_add(T a, T b)
{
	std::cout << "using 1 parameter version" << std::endl;
	return a+b;
}

template <typename T1, typename T2>
T2 my_add(T1 a, T2 b)
{
	std::cout << "using 2 parameter version" << std::endl;
	return a+b;
}

int my_add(int a, int b)
{
	std::cout << "using int version" << std::endl;
	return a+b;
}

#endif 