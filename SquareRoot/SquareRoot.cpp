#include <iostream>
#include <cmath>

#include "SquareRootConfig.h"

int main(int argc, char* argv[])
{
	std::cout << argv[0] << " Version " << SquareRoot_VERSION_MAJOR << "."
	<< SquareRoot_VERSION_MINOR << std::endl;
	
	double const inputValue = std::stod(argv[1]);	
	double outputValue = sqrt(inputValue);
	std::cout << "The square root of "<< inputValue << "is " << outputValue << std::endl;
	return 0;
}
