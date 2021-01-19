//
// Created by Mahmud Jego on 1/19/21.
//

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->_Name <<" has been turned into a pink pony!" << std::endl;
}

Peon &Peon::operator=(const Peon &peon)
{
	if (this != &peon)
	{}
	Victim::operator=(peon);
	return (*this);
}

Peon::Peon(const Peon &peon) : Victim(peon)
{

}
