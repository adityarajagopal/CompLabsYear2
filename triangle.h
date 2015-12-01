#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

class triangle
{
	point p1;
	point p2;
	point p3; 
	double get_dist(point p1, point p2) const;

public:
	triangle(point ip1, point ip2, point ip3);
	
	double perimeter() const;
	void translate(const point *vec);	
};


#endif
