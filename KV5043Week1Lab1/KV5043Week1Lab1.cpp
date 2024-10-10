// KV5043Week1Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int playerHealth = 100;
	float enemySpeed = 1.5;
	double playerXPosition = 10.75;
	char playerInitial = 'C';
	bool isGameOver = false;

	std::cout << "Player health (int):" << playerHealth << std::endl;
	std::cout << "Enemy Speed (Float):" << enemySpeed<< std::endl;
	std::cout << "Player X Position (double):" << playerXPosition << std::endl;
	std::cout << "Player Initial (Character):" << playerInitial << std::endl;
	std::cout << "Is Game Over (bool):" << isGameOver << std::endl;
	return 0;
}