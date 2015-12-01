#ifndef TEMPLATE_H
#define TEMPLATE_H

template <typename Type>
void my_swap(Type& a, Type& b)
{
	Type c;
	c = a;
	a = b; 
	b = c;
}

#endif 