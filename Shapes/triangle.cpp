#include "triangle.h"

// ******************* constructors/destructors ******************** 
triangle::triangle(point ip1, point ip2, point ip3):p1(ip1), p2(ip2), p3(ip3){}

// ******************* virtual ******************** 
double triangle::perimeter() const
{
	double l1, l2, l3;
	
	l1 = p1.get_dist(p2);
	l2 = p2.get_dist(p3);
	l3 = p3.get_dist(p1);

	return l1+l2+l3;	
}

void triangle::symmetric() 
{
	p1.symmetric();
	p2.symmetric();
	p3.symmetric();
}

void triangle::translate(const point& vector)
{
	p1.translate(vector);
	p2.translate(vector);
	p3.translate(vector);
}

std::string triangle::to_string() const
{	
	std::stringstream ss;
	ss << p1 << "," << p2 << "," << p3; 
	return ss.str();
}




