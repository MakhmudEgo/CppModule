//
// Created by Mahmud Jego on 1/31/21.
//

#include "easyfind.hpp"

int main()
{
	std::cout << "hello day 08 ex 00 :(" << std::endl;

	srand(time(nullptr));
	std::vector<int> vector;
	int generateSizeVecor = 1 + rand() % 99;
	std::cout << "generate size Vector: " << generateSizeVecor << std::endl;
	for (int i = 0; i < generateSizeVecor; ++i)
	{
		vector.push_back(rand() % 100);
	}
	for (std::vector<int >::const_iterator iter = vector.cbegin(); iter != vector.cend(); iter++)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl << "vector size: " << vector.size() << std::endl;
	std::cout << std::endl;
	int searchVal = rand() % 100;
	std::cout << "searchVal: " << searchVal << std::endl;
	try {
		std::cout << "return value: " << easyfind(vector, searchVal) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; //cerr
	}

	return (0);
}