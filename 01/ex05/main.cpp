//
// Created by Mahmud Jego on 1/9/21.
//

#include "Human.hpp"

int main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	bob.getBrain().InfoAboutBrain();
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}