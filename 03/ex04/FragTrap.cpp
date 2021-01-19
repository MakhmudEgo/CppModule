//
// Created by Mahmud Jego on 1/13/21.
//

#include "FragTrap.hpp"


FragTrap::FragTrap()
: ClapTrap("DefaultName", 100, 100, 100, 100, 1, 30, 20, 5)

{
	std::cout << "Constructor: The Superhero FragTrap, " << this->_Name << " was born:)" << std::endl;
}

FragTrap::FragTrap(const std::string& Name)
: ClapTrap(Name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "Constructor: The Superhero FragTrap, " << this->_Name << " was born:)" << std::endl;
	this->_HitPoint = 100;
	this->_MaxHitPoints = 100;
	this->_RangedAttackDamage = 20;
	this->_ArmorDamageReduction = 5;
}

FragTrap::FragTrap(const FragTrap & fragTrap) : ClapTrap(fragTrap)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << "Destructor: The Superhero FragTrap " << this->_Name << " died:(" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	const std::string pszAttack[] = {
			"in a friendly way",
			"with a sense of love",
			"closing my eyes and lowering my head",
			"singing along to katyusha",
			"not comment"
	};
	if (this->_EnergyPoints < 25)
	{
		std::cout << "not enough Energy Points, yu yuy u yu yu!" << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP: " << this->_Name << " attacks " <<
		target << ' ' << pszAttack[rand() % 5] << " causing " <<
		1 + rand() % 99 << " points of damage!" << std::endl
		<< getRandomFunnyQuote() << std::endl;
		this->_EnergyPoints -= 25;
	}
}

