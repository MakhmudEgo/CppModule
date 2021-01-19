//
// Created by Mahmud Jego on 1/19/21.
//

#include "Victim.hpp"

Victim::Victim(const std::string &name) : _Name(name)
{
	std::cout << "Some random victim called " << this->_Name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_Name << " just died for no apparent reason!" << std::endl;
}

const std::string &Victim::getName() const
{
	return (this->_Name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_Name << " has been turned into a cute little sheep!" << std::endl;
}

Victim &Victim::operator=(const Victim &victim)
{
	if (this != &victim)
	{
		this->_Name = victim._Name;
	}
	return (*this);
}

Victim::Victim(const Victim &victim)
{
	operator=(victim);
}

std::ostream &operator<<(std::ostream &os, const Victim &victim)
{
	os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (os);
}
