//
// Created by Mahmud Jego on 1/21/21.
//

#include "Cure.hpp"

Cure::~Cure()
{}

AMateria *Cure::clone() const
{
	return (new Cure);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::Cure()
: AMateria("cure")
{}

Cure::Cure(const Cure &cure)
: AMateria(cure)
{}

Cure &Cure::operator=(const Cure &cure)
{
	AMateria::operator=(cure);
	return (*this);
}
