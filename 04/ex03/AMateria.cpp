//
// Created by Mahmud Jego on 1/21/21.
//

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type)
: _Type(type), _Xp(0)
{}

AMateria::~AMateria()
{}

std::string const &AMateria::getType() const
{
	return (this->_Type);
}

unsigned int AMateria::getXP() const
{
	return (this->_Xp);
}

void AMateria::use(ICharacter &target)
{
	this->_Xp += 10;
	target.getName();
}

AMateria &AMateria::operator=(const AMateria &aMateria)
{
	if (this != &aMateria)
	{
		this->_Type = aMateria._Type;
		this->_Xp = aMateria._Xp;
	}
	return (*this);
}

AMateria::AMateria(const AMateria &aMateria)
{
	operator=(aMateria);
}
