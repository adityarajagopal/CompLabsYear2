#include "shapes.h"

std::ostream& operator<<(std::ostream& os, const shape* s1)
{
	os << s1->to_string();
	return os;
}

