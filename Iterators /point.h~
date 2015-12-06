#ifndef POINT_H
#define POINT_H

#include <string>
#include <vector>

class point
{
	double x;
	double y;
	double odist;
	double calc_odist() const;

public:
	//constructors and destructors
	point();
	point(double x_coord, double y_coord);
	point(const point &a1);

	//methods
	void symmetric();
	void translate(const point &P);
	double get_dist(const point &P) const;
	double get_odist() const;

	//operator overload	
	friend bool operator<(const point& p1, const point&p2); 
	friend bool operator==(const point& p1, const point& p2);
	friend std::ostream& operator<<(std::ostream& os, const point& p1);
	void operator=(const point& p2);
};

#endif


