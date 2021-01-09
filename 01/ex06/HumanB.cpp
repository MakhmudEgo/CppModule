//
// Created by Mahmud Jego on 1/9/21.
//

#include "HumanB.hpp"

HumanB::HumanB(const std::string &szName)
{
	this->_szName = szName;
}

void HumanB::attack()
{
	std::cout << this->_szName << " attacks with his " << this->_wWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &wWeapon)
{
	this->_wWeapon = &wWeapon;
}
