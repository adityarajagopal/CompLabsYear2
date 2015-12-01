#include "point.h"
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include "math.h"

using namespace std;

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

point::~point()
{
	cout << "(" << x << "," << y << ")" << endl;
	cout << odist << endl;
}

double point::calc_odist() const
{
	return sqrt((x*x) + (y*y));
}

void point::set_coord(double x_coord, double y_coord)
{
	x = x_coord;
	y = y_coord;
	odist = calc_odist();
	return;	
}

string point::return_coord() const
{
	stringstream  coord;
	coord << "(" << x << ", " << y << ")";
	return coord.str();
}
	 
double point::get_odist() const
{
	return odist;
}

double point::get_dist(const point &P) const
{
	double dist;
	double new_coord[2];
	dist = sqrt((x-P.x)*(x-P.x) + (y-P.y)*(y-P.y));
	return dist;
}

void point::symmetric()
{
	x = -x;
	y = -y;
	odist = calc_odist();
	return;
}

void point::translate(const point &P)
{
	x = x + P.x;
	y = y + P.y;
	odist = calc_odist();
	return;
}

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

void farthest(const vector<point> &points, point& farthest)
{
	vector<double> distances;
	int max = 0;
	double prev = 0;
	
	for(int i=0; i<5; i++)
	{
		if(points[i].get_odist() >= prev)
		{
			max = i;
			prev = points[i].get_odist();
			
		}
	}

	farthest = points[max];
}

int closest(const vector<point> &points)
{
	int closest = 0;
	
	for(int i=0; i<points.size(); i++)
	{
		if(points[i] < points[closest])
			closest = i;	
	}	
	
	return closest;
}

bool repetition(const vector<point>& points, point& repeat)
{
	for(int i=0; i<points.size(); i++)
	{
		for(int j=i+1; j<points.size(); j++)
		{
			if(points[i] == points[j])
			{
				repeat = points[i];
				return true;
			}
		}
	}
	return false;
}	

int member_point_unordsearch(const std::vector<point>& points, point& p1)
{
	for(int i=points.size()-1; i>=0; i--)
	{
		if(p1 == points[i])
			return i;
	}
	return points.size();		
}

int member_point_binsearch(const std::vector<point>& points, point& p1)
{
	int lowerBound = 0;
	int upperBound = points.size();
	int current;	
	
	while((upperBound-lowerBound)>1)
	{	
		current = floor((lowerBound+upperBound)/2);
		if(points[current] < p1)
			lowerBound = current;
		else if(p1 < points[current]) 
			upperBound = current;
		else 
			return current;
	}
	if(points[lowerBound] == p1)
		return lowerBound;
	else if(points[upperBound] == p1)
		return upperBound;
	else
		return points.size();
	
}

int member_point(const std::vector<point>& points, point& p1, bool ordered)
{
	if(ordered)
		return member_point_binsearch(points, p1);
	else
		return member_point_unordsearch(points, p1);
}

void pointdup(const std::vector<point>& points1, const std::vector<point>& points2, std::vector<point>& common, bool ordered)
{
	int index;
	for(int i = 0; i<points1.size(); i++)
	{
		point p1(points1[i]);
		index = member_point(points2, p1, ordered);
		if(index != points2.size())
			common.push_back(points1[i]); 
	}
}





















