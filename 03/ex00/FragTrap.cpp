//
// Created by Mahmud Jego on 1/13/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& Name) : _HitPoint(100),
_MaxHitPoints(100), _EnergyPoints(100), _MaxEnergyPoints(100),
_Level(1), _Name(Name), _MeleeAttackDamage(30), _RangedAttackDamage(20),
_ArmorDamageReduction(5)
{

}

void FragTrap::rangedAttack(const std::string &target)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_Name << " attacks " <<
				  target << " at range, causing " << this->_RangedAttackDamage << " points of damage!" << std::endl;
		this->_HitPoint -= this->_RangedAttackDamage;
		this->_HitPoint = this->_HitPoint < 0 ? 0 : this->_HitPoint;
	}
}

void FragTrap::meleeAttack(const std::string &target)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_Name << " attacks " <<
				  target << " at range, causing " << this->_MeleeAttackDamage << " points of damage!" << std::endl;
		this->_HitPoint -= this->_MeleeAttackDamage;
		this->_HitPoint = this->_HitPoint < 0 ? 0 : this->_HitPoint;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoint < 0)
	{
		std::cout << "Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_Name << " take " << amount << " damage!" << std::endl;
		this->_HitPoint -= (int)amount;
		this->_HitPoint = this->_HitPoint < 0 ? 0 : this->_HitPoint;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoint >= 100)
	{
		std::cout << "Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_Name << " be repaired " << amount << " Hit Points!" << std::endl;
		this->_HitPoint += (int)amount;
		this->_HitPoint = this->_HitPoint > 100 ? 100 : this->_HitPoint;
	}
}

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{

}
