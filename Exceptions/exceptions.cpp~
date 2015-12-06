#include <iostream> 
#include <cmath>
#include <cstdlib> 
#include <string> 

double my_sqrt(double n); 

int main(){
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
	
	return 0;
}

double my_sqrt(double n){
	double result;	
	if(n<0){
		std::string str = "cannot compute sqrt of negative number";
		throw str; 
	}

	result = sqrt(n); 

	if(isnan(result)){ 
		std::string str = "cannot compute sqrt";
		throw str; 
	}
	
	return result; 		
}
