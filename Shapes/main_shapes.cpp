#include "triangle.h"
#include "rectangle.h"
#include <vector>
#include <iostream>

int main()
{
	std::vector<shape*> shapes;
	shape* temp;
	
	point t1(0,1);
	point t2(3,9);
	point t3(-4,2);

	point r1(-1,4);
	point r2(-1, -3);
	point r3(2, 4);
	point r4(2,-3);	
	point trans(1,1);

	temp = new triangle(t1, t2, t3);
	shapes.push_back(temp);

	temp = new rectangle(r1, r2, r3, r4);
	shapes.push_back(temp);

	std::cout << "Perimeters" << std::endl;
	std::cout << shapes[0]->perimeter() << std::endl;
	std::cout << shapes[1]->perimeter() << std::endl;

	std::cout << "Pre translate" << std::endl;
	std::cout << shapes[0] << std::endl;
	std::cout << shapes[1] << std::endl;

	shapes[0]->translate(trans);
	shapes[1]->translate(trans);

	std::cout << "Post translate" << std::endl;
	std::cout << shapes[0] << std::endl;
	std::cout << shapes[1] << std::endl;

	shapes[0]->symmetric();
	shapes[1]->symmetric();

	std::cout << "Post symmetric" << std::endl;
	std::cout << shapes[0] << std::endl;
	std::cout << shapes[1] << std::endl;

	return 0;
}

