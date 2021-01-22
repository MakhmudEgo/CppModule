//
// Created by Mahmud Jego on 1/21/21.
//

#include "Ice.hpp"

Ice::~Ice()
{}

AMateria *Ice::clone() const
{
	return (new Ice);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice()
: AMateria("ice")
{}

Ice::Ice(const Ice &ice)
: AMateria(ice)
{}

Ice &Ice::operator=(const Ice &ice)
{
	AMateria::operator=(ice);
	return (*this);
}
