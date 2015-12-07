#include <iostream> 
#include <cmath>
#include <cstdlib> 
#include <string> 
#include <vector>

double my_sqrt(double n); 

class invalid_sqrt_argument : public std::invalid_argument
{
public:
	invalid_sqrt_argument(const std::string& what) : invalid_argument(what) {}
};

int main(){
	/*
	double n, result; 
	std::cin >> n; 
	try{	
		result = my_sqrt(n); 
		std::cout << result << std::endl;
	}
	catch(const std::string& msg){
		std::cout << msg << std::endl;	
	}

	std::cout << "program still continues" << std::endl;
	*/ 

	std::vector<int> v(3); 

	try
	{
		my_sqrt(2);
		std::cout << v.at(33) << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const invalid_sqrt_argument& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(const std::logic_error& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

double my_sqrt(double n){
	double result;	
	if(n<0){
		std::string str = "cannot compute sqrt of negative number";
		throw invalid_sqrt_argument(str); 
	}

	result = sqrt(n); 

	if(isnan(result)){ 
		throw std::logic_error("cannot compute square root");
	}
	
	return result; 		
}