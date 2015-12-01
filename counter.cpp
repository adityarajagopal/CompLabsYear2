#include "counter.h"
#include <sstream>
#include <string>

counter::counter(int init):count(init) {}

int counter::get_count() const
{
	return count;
}

// void counter::increment() 
// {
// 	count++;
// }

bool counter::increment() 
{
	count++;
	return false;
}

void counter::reset()
{
	count = 0;
}
/*
std::ostream& operator<<(std::ostream& os, const counter& c)
{
	os << c.count;
	return os;
}
*/

std::ostream& operator<<(std::ostream& os, const counter& c)
{
	os << c.to_string();
	return os;
}

std::string counter::to_string() const
{
	std::stringstream ss;
	ss << count;
	return ss.str();
} 