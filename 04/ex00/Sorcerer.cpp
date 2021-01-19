//
// Created by Mahmud Jego on 1/19/21.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title)
: _Name(name), _Title(title)
{
	std::cout << this->_Name << ", " << this->_Title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_Name << ", " << this->_Title << ", is dead. Consequences will never be the same!" << std::endl;
}

const std::string &Sorcerer::getName() const
{
	return (this->_Name);
}

const std::string &Sorcerer::getTitle() const
{
	return (this->_Title);
}

void Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
	operator=(sorcerer);
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer)
{
	if (this != &sorcerer)
	{
		this->_Name = sorcerer._Name;
		this->_Title = sorcerer._Title;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer)
{
	os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return (os);
}
