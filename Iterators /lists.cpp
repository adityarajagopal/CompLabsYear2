#include <list>
#include <fstream>
#include <iostream>

#include "point.h"

template <typename T> 
T smallest_element (const std::list<T>& v);

int main()
{
	std::list<point> l1; 
	double x,y; 
	std::ifstream ipfile; 
	typename std::list<point>::const_iterator it; 

	ipfile.open("points.txt"); 
	while(ipfile >> x >> y)
		l1.push_back(point (x,y));	
	
	for(it=l1.begin(); it!=l1.end(); it++)
		std::cout << *it << std::endl;
	std::cout<<std::endl;
	
	//min_element through own function
	std::cout << smallest_element<point>(l1) << std::endl; 
	std::cout << std::endl;
	
	//sort using list method sort
	l1.sort(); 
	for(it=l1.begin(); it!=l1.end(); it++)
		std::cout << *it << std::endl;

	return 0;
}

template <typename T> 
T smallest_element(const std::list<T>& l)
{
	typename std::list<T>::const_iterator it;
	T min = *l.begin(); 
	int min_index = 0; 	
	for(it = l.begin(); it != l.end(); ++it)
	{	
		if(*it < min){
			min = *it;	
		}
	}
	return min; 	
}
