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
	friend std::ostream& operator<<(std::ostream& os, const my_complex<T2>& z);

	template<typename T3>
	friend my_complex<T3> operator+(my_complex<T3>& z1, my_complex<T3>& z2);

	template<typename T4> 
	friend my_complex<T4> operator+(double d1, my_complex<T4>& z2);
};

template<typename T> 
my_complex<T>::my_complex(T r, T im):real(r), img(im) {}

template<typename T> 
std::ostream& operator<<(std::ostream& os, const my_complex<T>& z)
{
	os << z.real << " + j" << z.img;
	return os;
}

template<typename T>
my_complex<T> operator+(my_complex<T>& z1, my_complex<T>& z2)
{
	return my_complex<T> ((z1.real+z2.real), (z1.img + z2.img));
}

template<typename T> 
my_complex<T> operator+(double d1, my_complex<T>& z2)
{
	return my_complex<T> ((z2.real+d1), (z2.img));
}

#endif 