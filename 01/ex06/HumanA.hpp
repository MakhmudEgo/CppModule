//
// Created by Mahmud Jego on 1/9/21.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(const std::string &szName, Weapon &wWeapon);

	void attack();

private:
	std::string _szName;
	Weapon& _wWeapon;
};


#endif //HUMANA_HPP
