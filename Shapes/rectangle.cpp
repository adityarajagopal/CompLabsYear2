#include "rectangle.h"

rectangle::rectangle(point ip1, point ip2, point ip3, point ip4) : p1(ip1), p2(ip2), p3(ip3), p4(ip4) {}

double rectangle::perimeter() const
{
	double peri = 0;
	peri += p1.get_dist(p2);
	peri += p2.get_dist(p3);
	peri += p3.get_dist(p4); 
	peri += p4.get_dist(p1);

	return peri;
}

void rectangle::symmetric()
{
	p1.symmetric();
	p2.symmetric(); 
	p3.symmetric(); 
	p4.symmetric();
}

void rectangle::translate(const point& vector)
{
	p1.translate(vector);
	p2.translate(vector);
	p3.translate(vector);
	p4.translate(vector);
}

std::string rectangle::to_string() const
{
	std::stringstream ss;
	ss << p1 << "," << p2 << "," << p3 << "," << p4;
	return ss.str();
}