//
// Created by Mahmud Jego on 1/9/21.
//

#include "HumanA.hpp"

HumanA::HumanA(const std::string &szName, Weapon &wWeapon) : _wWeapon(wWeapon)
{
	this->_szName = szName;
}

void HumanA::attack() const
{
	std::cout << this->_szName << " attacks with his " << this->_wWeapon.getType() << std::endl;
}
