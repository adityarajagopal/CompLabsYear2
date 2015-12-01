#ifndef POINT_H
#define POINT_H

#include <string>
#include <vector>

class point
{
private:
	double x;
	double y;
	double odist;
	double calc_odist() const;

public:
	point();
	point(double x_coord, double y_coord);
	point(const point &a1);

	~point();

	void set_coord(double x_coord, double y_coord);
	std::string return_coord() const;
	double get_odist() const;
	double get_dist(const point &P) const;
	void symmetric();
	void translate(const point &P);
	
	friend bool operator<(const point& p1, const point&p2); 
	friend bool operator==(const point& p1, const point& p2);
	friend std::ostream& operator<<(std::ostream& os, const point& p1);
};

//returns farthest point in vector
void farthest(const std::vector<point> &points, point& farthest);

//returns point closest to origin in vector
int closest(const std::vector<point> &points);

//returns true if there is a point in the vector that is repeated, and which point it is
bool repetition(const std::vector<point> &points, point& repeat);

//return index where the p1 is found in the vector and if not found, the size of the vector
int member_point_unordsearch(const std::vector<point>& points, point& p1);

//finds index of point, but on ordered vector and performs binary search
int member_point_binsearch(const std::vector<point>& points, point& p1);

int member_point(const std::vector<point>& points, point& p1, bool ordered = false);

//puts common points between 2 vectors in a 3rd vector
void pointdup(const std::vector<point>& points1, const std::vector<point>& points2, std::vector<point>& common, bool ordered); 

#endif


