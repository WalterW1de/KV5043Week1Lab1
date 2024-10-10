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

	std::cout << "Size of int: " << sizeof(int) << "bytes" << std::endl;
	std::cout << "Size of float: " << sizeof(float) << "bytes" << std::endl;
	std::cout << "Size of double: " << sizeof(double) << "bytes" << std::endl;
	std::cout << "Size of char: " << sizeof(char) << "bytes" << std::endl;
	std::cout << "Size of bool: " << sizeof(bool) << "bytes" << std::endl;
	return 0;
}