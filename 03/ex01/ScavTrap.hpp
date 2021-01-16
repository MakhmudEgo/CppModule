//
// Created by Mahmud Jego on 1/16/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap {
public:
	ScavTrap(const std::string& Name);

	ScavTrap(const ScavTrap& fragTrap);

	ScavTrap& operator=(const ScavTrap& fragTrap);

	~ScavTrap();

	void rangedAttack(std::string const & target);

	void meleeAttack(std::string const & target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

	void challengeNewcomer() const;

private:
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


#endif //SCAVTRAP_HPP
