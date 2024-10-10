#include <iostream>

int main()
{
	int enemyHealth[5] = { 100, 90, 80, 70, 60 };
	float enemySpeeds[4] = { 1.5f, 2.356f, 0.245f, 0.9999999f };
	double enemyXPositions[4] = { 2.3567, 0.245, 0.9999999, 9.9999999999};
	char playerName[5] = { 'C', 'h', 'r', 'i', 's' };

	std::cout << "Enemy Health (traditional for loop): " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << enemyHealth[i] << std::endl;
	}

	std::cout << "Enemy Speeds (traditional for loop): " << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << enemySpeeds[i] << std::endl;
	}

	int i = 0;
	for (double Positions : enemyXPositions)
	{
		std::cout << "Enemy" << i + 1 << "Position" << Positions << std::endl;
		i++;
	}

	return 0;
}