//
// Created by Mahmud Jego on 1/9/21.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
public:
	HumanB(const std::string &szName);

	void attack();

	void setWeapon(Weapon &wWeapon);

private:
	std::string _szName;
	Weapon *_wWeapon;
};


#endif //HUMANB_HPP
