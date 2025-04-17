#include <iostream>
#include <cmath>

int main(int argc, char* argv[])
{
	double const inputValue = std::stod(argv[0]);	
	double outputValue = sqrt(inputValue);
	std::cout << "The square root of "<< inputValue << "is " << outValue << std::endl;
	return 0;
}
