#include "intvector.h"
#include <iostream>

intvector::intvector():size(0), capacity(1)
{
	i = new int[capacity];
}

intvector::intvector(int vec_size):size(0), capacity(vec_size)
{
	i = new int[capacity];
}

intvector::intvector(const intvector& v)
{
	i = new int[v.capacity];
	for(int j=0; j<v.size; j++)
		i[j] = v[j]; 
	size = v.size;
	capacity = v.capacity;
}

intvector::~intvector()
{
	delete[] i;
}

void intvector::push_back(int i1)
{
	if(capacity == size)
	{
		capacity = 2*capacity;
		int* temp = new int[capacity];
		for(int j=0; j<size; j++)
			temp[j] = i[j];
		delete[] i;
		i = temp;
	}

	i[size] = i1;
	size++;
}

int& intvector::at(int n)
{
	return i[n];
}

int intvector::iv_size() const 
{
	return size;
}

int intvector::iv_capacity() const
{
	return capacity;
}

int intvector::find(int n) const
{
	for(int j=0; j<size; j++)
	{
		if(i[j] == n)
			return j;
	}
	return -1;
}

int& intvector::operator[](int n)
{
	return i[n];
}

const int& intvector::operator[](int n) const
{
	return i[n];
}

void intvector::operator=(const intvector& v1)
{
	if(&v1 != this)
	{
		delete[] i;
		i = new int[v1.capacity];
		for(int j=0; j<v1.size; j++)
		{
			i[j] = v1[j];
		}
		size = v1.size;
		capacity= v1.capacity;
	}
}

std::ostream& operator<<(std::ostream& os, const intvector& iv)
{	
	for(int j=0; j<iv.size; j++)
		os << iv.i[j] << std::endl;

	return os;
}

