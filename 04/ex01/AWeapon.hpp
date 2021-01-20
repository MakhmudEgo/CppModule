//
// Created by Mahmud Jego on 1/19/21.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon {
private:
	std::string _Name;
	int _APCost;
	int _Damage;
public:
	AWeapon(const std::string &name, int apCost, int damage);
	AWeapon(const AWeapon& aWeapon);
	AWeapon& operator=(const AWeapon& aWeapon);
	virtual ~AWeapon();
	const std::string& getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif //AWEAPON_HPP
