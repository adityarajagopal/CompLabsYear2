#include <vector>
#include <iostream>
#include "point.h"
#include <fstream>

int main()
{
	std::vector<point> v1;
	std::vector<point*> v2;
	std::ifstream points; 
	double x, y;
	point* temp;

	points.open("points.txt");

	while(points >> x >> y)
	{
		// static
		v1.push_back(point(x,y));
		std::cout << "size v1 = " << v1.size() << " ";
		std::cout << "capacity v1 = " << v1.capacity() << std::endl;

		//dynamic
		temp = new point(x,y);
		v2.push_back(temp);
		temp->symmetric();

		std::cout << "size v2 = " << v2.size() << " ";
		std::cout << "capacity v2 = " << v2.capacity() << std::endl;
	}

	for(int i = 0; i<v2.size(); i++)
		delete v2[i];

	return 0;
}