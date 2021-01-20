//
// Created by Mahmud Jego on 1/20/21.
//

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& assaultTerminator)
{
	std::cout << "* teleports from space *" << std::endl;
	operator=(assaultTerminator);
}

AssaultTerminator&  AssaultTerminator::operator=(const AssaultTerminator& assaultTerminator)
{
	if (this != &assaultTerminator)
		return (*this);
	return (*this);
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return (new AssaultTerminator);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
