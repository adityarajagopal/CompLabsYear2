#ifndef SHAPES_H
#define SHAPES_H

#include "point.h"
#include <string>

class shape
{
public:
	virtual double perimeter() const =0;
	virtual void symmetric() =0;
	virtual void translate(const point& vector) =0;
	virtual std::string to_string() const =0;

	virtual ~shape() {};

	//operator overload	
	friend std::ostream& operator<<(std::ostream& os, const shape* s1)
	{
		os << s1->to_string();
		return os;
	}
};

#endif