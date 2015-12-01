#include <fstream>
#include <string>
#include "point.h"
#include <vector>
#include <iostream>

using namespace std;	

int main(int argc, char* argv[])
{
	ifstream ipf1, ipf2;
	int x,y;
	vector<point> points, points1, common;
	
	ipf1.open(argv[1]);
	ipf2.open(argv[2]);	
	
	while(ipf1 >> x >> y)
	{	
		points.push_back(point(x,y));
	}	

	while(ipf2 >> x >> y)
	{	
		points1.push_back(point(x,y));
	}

	cout << "--------------------------------------"<< endl;
	//code for testing member_point_unordsearch function
	point p1(8,3);
	int index = member_point_unordsearch(points, p1);
	cout << "size of vector = " << points.size() << endl;
	cout << "index of point p1 = " << index << endl;
	
	cout << "--------------------------------------" << endl;
	//code for testing binary search
	index = member_point_binsearch(points, p1);
	cout << "size of vector = " << points.size() << endl;
	cout << "index of point p1 = " << index << endl;

	cout << "--------------------------------------" << endl;
	//code for testing member_point function
	index = member_point(points, p1, true);
	cout << "size of vector = " << points.size() << endl;
	cout << "index of point p1 = " << index << endl;

	cout << "--------------------------------------" << endl;
	//code for testing pointdup function
	pointdup(points, points1, common, true);
	for(int i=0; i<common.size(); i++)
		cout << common[i] << endl;

	ipf1.close();
	ipf2.close();
}
