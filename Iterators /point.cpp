#include "point.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "math.h"

using namespace std;

// ******************* constructors/destructors ******************** 
point::point():x(0), y(0)
{
	odist = calc_odist();
}

point::point(double x_coord, double y_coord):x(x_coord), y(y_coord)
{
	odist = calc_odist();
}

point::point(const point &a1)
{
	x = a1.x;
	y = a1.y;
	odist = a1.odist;
}

// ******************* methods ******************** 
double point::calc_odist() const
{
	return sqrt((x*x) + (y*y));
}

double point::get_dist(const point &P) const
{
	double dist;
	dist = sqrt((x-P.x)*(x-P.x) + (y-P.y)*(y-P.y));
	return dist;
}

void point::symmetric()
{
	x = -x;
	y = -y; 
	odist = calc_odist();
}

void point::translate(const point& vector)
{
	x += vector.x;
	y += vector.y;
	odist = calc_odist();
}

double point::get_odist() const
{
	return sqrt(x*x + y*y);
}

// ******************* operator overloads ******************** 
bool operator<(const point& p1, const point& p2)
{
	if(p1.get_odist() < p2.get_odist())
		return true;
	else 
		return false;
}

bool operator==(const point& p1, const point& p2)
{
	if((p1.x == p2.x) && (p1.y == p2.y))
		return true;
	else 
		return false;
}

ostream& operator<<(ostream& os, const point& p1)
{
	os << "(" << p1.x << "," << p1.y << ")";
	return os; 
}

void point::operator=(const point& p2)
{
	x = p2.x;
	y = p2.y;
	odist = p2.odist;
}

