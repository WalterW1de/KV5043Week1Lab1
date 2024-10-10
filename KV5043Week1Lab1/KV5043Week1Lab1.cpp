#include <iostream>

int main()
{
	int enemyYPosition = 100;
	float enemyYVelocity = 2.3f;

int enemyYvelocityInt = (int)enemyYVelocity;

	std::cout << enemyYPosition << std::endl;

	enemyYPosition = enemyYPosition * enemyYVelocity; // Implicit Cast of enemyYVelocity from float to int

	std::cout << enemyYPosition << std::endl;

	enemyYPosition = (float)enemyYPosition * enemyYVelocity; // Explicit Cast of enemyYVelocity from float to int
	
	std::cout << enemyYPosition << std::endl;

	enemyYPosition = float(enemyYPosition) * enemyYVelocity; // Explicit Functional Cast of enemyYVelocity from float to int

	std::cout << enemyYPosition << std::endl;

	enemyYPosition = static_cast <float>(enemyYPosition * enemyYVelocity); // Explicit C++ style Cast of enemyYVelocity from float to int

	std::cout << enemyYPosition << std::endl;

		return 0;
}