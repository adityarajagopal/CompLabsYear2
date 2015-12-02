#include <vector> 
#include <iostream> 
#include <algorithm>

template <typename T> 
void print_vector (const std::vector<T>& v);

int main(int argc, char const *argv[])
{
	std::vector<int> v1; 
	v1.push_back(2);
	v1.push_back(-5);
	v1.push_back(8);
	v1.push_back(3);
	v1.push_back(2);
	v1.push_back(21);
	v1.push_back(0);

	print_vector<>(v1);
	std::cout << std::endl;

	std::sort(v1.begin(), v1.end());

	print_vector<>(v1);

	return 0;
}

template <typename T> 
void print_vector(const std::vector<T>& v)
{
	typename std::vector<T>::const_iterator it; 
	for(it = v.begin(); it != v.end(); ++it)
		std::cout << *it << std::endl;
}	