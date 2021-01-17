//
// Created by Mahmud Jego on 1/16/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& Name)
: ClapTrap(Name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "Constructor: The Superhero ScavTrap, " << this->_Name << " was born:)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &fragTrap)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if (this != &fragTrap)
	{
		this->_HitPoint = fragTrap._HitPoint;
		this->_MaxHitPoints = fragTrap._MaxHitPoints;
		this->_EnergyPoints = fragTrap._EnergyPoints;
		this->_MaxEnergyPoints = fragTrap._MaxEnergyPoints;
		this->_Level = fragTrap._Level;
		this->_Name = fragTrap._Name;
		this->_MeleeAttackDamage = fragTrap._MeleeAttackDamage;
		this->_RangedAttackDamage = fragTrap._RangedAttackDamage;
		this->_ArmorDamageReduction = fragTrap._ArmorDamageReduction;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor: The Superhero ScavTrap " << this->_Name << " died:(" << std::endl;
}

void ScavTrap::challengeNewcomer() const
{
	const std::string pszQuotes[] = {
			"I can take ya!.. I think.",
			"Ow, what was that for?",
			"Oh, it's on now!",
			"You wanna fight with me?! Put 'em up!.. Put 'em up?",
			"A million baddies, and you wanna hit me? Aww!",
			"Now? But I... I just... okay..."
	};
	std::cout << "FR4G-TP " << this->_Name << ' ' << pszQuotes[rand() % 6] << std::endl;
}
