#ifndef INTVECTOR_H
#define INTVECTOR_H

#include <iostream>

class intvector
{
private:
	int* i;
	int size; 
	int capacity;

public:
	intvector();
	intvector(int vec_size);
	intvector(const intvector& v);

	~intvector();

	void push_back(int i1);
	int& at(int n);
	int iv_size() const;
	int iv_capacity() const;
	int find(int n) const;

	int& operator[](int i);
	const int& operator[](int i) const;
	void operator=(const intvector& v1);
	friend std::ostream& operator<<(std::ostream& os, const intvector& iv);
};

#endif
