#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shapes.h"
#include <sstream>

class rectangle : public shape
{
	point p1;
	point p2;
	point p3; 
	point p4;

public:
	//constructor
	rectangle(point ip1, point ip2, point ip3, point ip4);
	
	//virtual
	double perimeter() const;
	void symmetric();
	void translate(const point& vector);	
	std::string	to_string() const;

};

#endif
