//
// Created by Mahmud Jego on 1/30/21.
//

#include "iter.hpp"

int main()
{
	std::cout << "hello day 07 ex 01 :(" << std::endl << std::endl;

	srand(time(nullptr));

	std::cout << "test for int" << std::endl;
	int arrInt[] = {(rand() % 10), (rand() % 10), (rand() % 10), (rand() % 10), (rand() % 10)};
	ft_diff(arrInt);

	std::cout << "test for char" << std::endl;
	char arrChar[] = {(char)(96 + rand() % 25), (char)(97 + rand() % 25), (char)(97 + rand() % 25), (char)(97 + rand() % 25), (char)(97 + rand() % 25)};
	ft_diff(arrChar);

	std::cout << "test for flaot" << std::endl;
	float arrFloat[] = {(float)((rand() % 10) + 0.1), (float)((rand() % 10) + 0.2), (float)((rand() % 10) + 0.3), (float)((rand() % 10) + 0.4), (float)((rand() % 10) + 0.5)};
	ft_diff(arrFloat);

	return (0);
}