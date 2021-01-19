//
// Created by Mahmud Jego on 1/18/21.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &Name) : ClapTrap(Name), FragTrap(Name), NinjaTrap(Name)
{
	std::cout << "Constructor: The Superhero SuperTrap, " << this->_Name << " was born:)" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor: The Superhero SuperTrap " << this->_Name << " died:(" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap) : ClapTrap(superTrap)
{
	std::cout << "Copy SuperTrap constructor called" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &superTrap)
{
	std::cout << "SuperTrap Assignation operator called" << std::endl;
	if (this != &superTrap)
	{
		this->_HitPoint = superTrap._HitPoint;
		this->_MaxHitPoints = superTrap._MaxHitPoints;
		this->_EnergyPoints = superTrap._EnergyPoints;
		this->_MaxEnergyPoints = superTrap._MaxEnergyPoints;
		this->_Level = superTrap._Level;
		this->_Name = superTrap._Name;
		this->_MeleeAttackDamage = superTrap._MeleeAttackDamage;
		this->_RangedAttackDamage = superTrap._RangedAttackDamage;
		this->_ArmorDamageReduction = superTrap._ArmorDamageReduction;
	}
	return (*this);
}

void SuperTrap::rangedAttack(const std::string &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target)
{
	NinjaTrap::meleeAttack(target);
}
