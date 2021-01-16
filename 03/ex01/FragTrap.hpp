//
// Created by Mahmud Jego on 1/13/21.
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
#

class FragTrap {
public:
	FragTrap(const std::string& Name);

	FragTrap(const FragTrap& fragTrap);

	FragTrap& operator=(const FragTrap& fragTrap);

	~FragTrap();

	void rangedAttack(std::string const & target);

	void meleeAttack(std::string const & target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

	void vaulthunter_dot_exe(std::string const & target);

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


#endif //FRAGTRAP_HPP
