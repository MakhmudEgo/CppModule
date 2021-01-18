//
// Created by Mahmud Jego on 1/16/21.
//

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(
			const std::string& Name,
			const int& HitPoint,
			const int& MaxHitPoints,
			const int& EnergyPoints,
			const int& MaxEnergyPoints,
			const int& Level,
			const int& MeleeAttackDamage,
			const int& RangedAttackDamage,
			const int& ArmorDamageReduction
			);
	ClapTrap(const ClapTrap& clapTrap);
	virtual ~ClapTrap();
	ClapTrap& operator=(const ClapTrap& clapTrap);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const std::string& getName() const;
	const int& getHitPoint() const;
	bool LifeCheck() const;

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
