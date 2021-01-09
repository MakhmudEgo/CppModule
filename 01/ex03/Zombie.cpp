//
// Created by Mahmud Jego on 1/8/21.
//

#include "Zombie.hpp"

void Zombie::announce() const
{
	std::cout << szName << " (" << szType << ") " << "Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(const std::string &szName, const std::string &szType)
{
	std::cout << "call " << szName << " Constructor" << std::endl;
	this->szName = szName;
	this->szType = szType;
}

Zombie::~Zombie()
{
	std::cout << "call Destructor " << this->szName << ", Memory Cleared!" << std::endl;
}



