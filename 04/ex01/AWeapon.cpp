//
// Created by Mahmud Jego on 1/19/21.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apCost, int damage)
: _Name(name), _APCost(apCost), _Damage(damage)
{

}

AWeapon::~AWeapon()
{

}

const std::string& AWeapon::getName() const
{
	return (this->_Name);
}

int AWeapon::getAPCost() const
{
	return (this->_APCost);
}

int AWeapon::getDamage() const
{
	return (this->_Damage);
}

AWeapon &AWeapon::operator=(const AWeapon &aWeapon)
{
	if (this != &aWeapon)
	{
		this->_Name = aWeapon._Name;
		this->_APCost = aWeapon._APCost;
		this->_Damage = aWeapon._Damage;
	}
	return (*this);
}

AWeapon::AWeapon(const AWeapon &aWeapon)
{
	operator=(aWeapon);
}
