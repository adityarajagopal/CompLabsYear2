#include "point.h"
#include "triangle.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//code for testing triangle class
	cout << "triangle tests" << endl;
	
	vector<point> points; 
	ifstream ipfile;
	double x,y;
	
	ipfile.open("vertices.txt");	

	while(ipfile >> x >> y)
	{	
		points.push_back(point (x,y));		
	}

	triangle t1 (points[0], points[1], points[2]);
	
	cout << "perimeter before translation: " << t1.perimeter() << endl;	
	
	point vec = point (2,5);
	t1.translate(&vec); 
	
	cout << "perimeter after translation: " << t1.perimeter() << endl;	
	
	ipfile.close();
	
	return 0;
}
