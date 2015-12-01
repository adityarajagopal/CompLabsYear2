#include "modulocounter.h"
#include <string>
#include <sstream>

//modulocounter as implemented using counter as composition
/*
ModuloCounter::ModuloCounter(int m):modulo(m) {}

bool ModuloCounter::increment()
{
	c.increment();

	if((modulo > 0) && (c.get_count() >= modulo))
	{
		c.reset();
		return true;
	}
	return false;
}

void ModuloCounter::reset()
{
	c.reset();
}

int ModuloCounter::get_count() const
{
	return c.get_count();
}

std::ostream& operator<<(std::ostream& os, const ModuloCounter& mc)
{
	os << mc.c;
	return os;
}
*/

//modulocounter as implemented as a subclass extending counter

ModuloCounter::ModuloCounter(int m):modulo(m), counter(0) {};

bool ModuloCounter::increment()
{
	counter::increment();

	if((modulo > 0) && (counter::get_count() >= modulo))
	{
		counter::reset();
		return true;
	}
	return false;
}

std::string ModuloCounter::to_string() const
{
	std::stringstream ss;
	ss << counter::to_string() << "(" << modulo << ")";
	return ss.str();
}



