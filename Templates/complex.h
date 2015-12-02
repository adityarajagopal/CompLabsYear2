#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

template <typename T = double>
class my_complex
{
private:
	T real; 
	T img;

public:
	my_complex(T r = 0, T im = 0);

	template<typename T2> 
	friend std::ostream& operator<<(std::ostream& os, const my_complex<T2> z);
};

template<typename T> 
my_complex<T>::my_complex(T r, T im):real(r), img(im) {}

template<typename T> 
std::ostream& operator<<(std::ostream& os, const my_complex<T> z)
{
	os << z.real << " + j" << z.img;
	return os;
}

#endif 