#include "triangle.h"
#include "math.h"

triangle::triangle(point ip1, point ip2, point ip3):p1(ip1), p2(ip2), p3(ip3){}

double triangle::perimeter() const
{
	double l1, l2, l3;
	
	l1 = p1.get_dist(p2);
	l2 = p2.get_dist(p3);
	l3 = p3.get_dist(p1);

	return l1+l2+l3;	
}

void triangle::translate(const point *vec)
{
	p1.translate(*vec);
	p2.translate(*vec);
	p3.translate(*vec);
}

