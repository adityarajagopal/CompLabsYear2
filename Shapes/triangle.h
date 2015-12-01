#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shapes.h"
#include <sstream>

class triangle : public shape
{
	point p1;
	point p2;
	point p3; 

public:
	//constructor
	triangle(point ip1, point ip2, point ip3);
	
	//virtual
	double perimeter() const;
	void symmetric();
	void translate(const point& vector);
	std::string	to_string() const;
};

#endif
