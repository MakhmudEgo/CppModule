//
// Created by Mahmud Jego on 1/18/21.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &Name) : FragTrap(Name), NinjaTrap(Name)
{
	std::cout << "Constructor: The Superhero SuperTrap, " << this->_Name << " was born:)" << std::endl;
	this->_HitPoint = this->FragTrap::_HitPoint;
	this->_MaxHitPoints = this->FragTrap::_MaxHitPoints;
	this->_EnergyPoints = this->NinjaTrap::_EnergyPoints;
	this->_MaxEnergyPoints = this->NinjaTrap::_MaxEnergyPoints;
	this->_Level = 1;
	this->_Name = Name;
	this->_MeleeAttackDamage = this->NinjaTrap::_MeleeAttackDamage;
	this->_RangedAttackDamage = this->FragTrap::_RangedAttackDamage;
	this->_ArmorDamageReduction = this->FragTrap::_ArmorDamageReduction;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Destructor: The Superhero SuperTrap " << this->_Name << " died:(" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap) : FragTrap(superTrap)
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
