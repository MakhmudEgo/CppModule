//
// Created by Mahmud Jego on 1/20/21.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <ostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
public:
	Character(std::string const & name);
	Character(const Character& character);
	Character& operator=(const Character& character);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	const std::string& getName() const;
	int getAp() const;
	AWeapon *getAWeapon() const;

private:
	std::string _Name;
	int _AP;
	AWeapon *_AWeapon;
};

std::ostream &operator<<(std::ostream &os, const Character &character);

#endif //CHARACTER_HPP
