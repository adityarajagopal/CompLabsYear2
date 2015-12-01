#include "point.h"
#include "triangle.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//code for testing < operator overload
	cout << "operator overload test" << endl;
	
	vector<point> points; 
	points.clear();
	ifstream ipfile;
	double x,y;	
	
	ipfile.open("points.txt");	

	while(ipfile >> x >> y)
		points.push_back(point(x,y));

	int closestPoint = closest(points);

	cout << "index of closest point: " << closestPoint << endl;
	
	point repeated;
	if(repetition(points, repeated))
		cout << "point that repeats: " << repeated.return_coord() << endl;
	else
		cout << "no repetition" << endl;
	
	ipfile.close();
	
	return 0;
}
