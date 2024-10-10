#include <iostream>
#include <iomanip>

int main()
{
	float testFloat = 2.3456789;
	double testDouble = 2.3456789;
	std::cout << std::setprecision(10) << testFloat << std::endl;
	std::cout << std::setprecision(10) << testDouble << std::endl;

	return 0;
}