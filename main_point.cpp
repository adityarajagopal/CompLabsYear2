#include "point.h"
#include "triangle.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//code for testing point class and finding farthest point
	cout << "point tests" << endl;
	vector<point> points; 
	ifstream ipfile;
	double x,y;

	ipfile.open("points.txt");

	point p1(3,5);
	point p2(2,2);
	
	cout << p1.get_dist(p2) << endl;

	while(ipfile >> x >> y)
	{
		//point (x,y) creates a temp object		
		points.push_back(point (x,y));
	}

	point p5;
	farthest(points, p5);	

	cout << "farthest point: " << p5.return_coord() << endl;
	
	ipfile.close();
	
	return 0;
}
 
