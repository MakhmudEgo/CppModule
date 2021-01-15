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

	void rangedAttack(std::string const & target);

	void meleeAttack(std::string const & target);

	void takeDamage(unsigned int amount);

	void beRepaired(unsigned int amount);

	void vaulthunter_dot_exe(std::string const & target);

	std::string getRandomFunnyQuote() const;
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
};


#endif //FRAGTRAP_HPP
