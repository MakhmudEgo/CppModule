//
// Created by Mahmud Jego on 1/16/21.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "ScavTrap.hpp"

class ClapTrap {
public:
	void rangedAttack(std::string const & target);

	void meleeAttack(std::string const & target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);
protected:
	int _HitPoint;
	int _MaxHitPoints;
	int _EnergyPoints;
	int _MaxEnergyPoints;
	int _Level;
	std::string _Name;
	int _MeleeAttackDamage;
	int _RangedAttackDamage;
	int _ArmorDamageReduction;

	std::string getRandomFunnyQuote() const;
};


#endif //CLAPTRAP_HPP
