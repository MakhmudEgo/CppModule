//
// Created by Mahmud Jego on 1/9/21.
//

#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
	return (this->_szType);
}

void Weapon::setType(const std::string& szType)
{
	this->_szType = szType;
}

Weapon::Weapon(const std::string& szType) {
	this->_szType = szType;
}
