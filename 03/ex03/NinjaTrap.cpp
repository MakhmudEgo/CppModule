//
// Created by Mahmud Jego on 1/17/21.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &Name)
: ClapTrap(Name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "Constructor: The Superhero NinjaTrap, " << this->_Name << " was born:)" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap) : ClapTrap(ninjaTrap)
{
	std::cout << "Copy NinjaTrap constructor called" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninjaTrap)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if (this != &ninjaTrap)
	{
		this->_HitPoint = ninjaTrap._HitPoint;
		this->_MaxHitPoints = ninjaTrap._MaxHitPoints;
		this->_EnergyPoints = ninjaTrap._EnergyPoints;
		this->_MaxEnergyPoints = ninjaTrap._MaxEnergyPoints;
		this->_Level = ninjaTrap._Level;
		this->_Name = ninjaTrap._Name;
		this->_MeleeAttackDamage = ninjaTrap._MeleeAttackDamage;
		this->_RangedAttackDamage = ninjaTrap._RangedAttackDamage;
		this->_ArmorDamageReduction = ninjaTrap._ArmorDamageReduction;
	}
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor: The Superhero NinjaTrap " << this->_Name << " died:(" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap)
{
	if (this->LifeCheck())
	{
		switch (rand() % 2)
		{
			case 0:
				if (!ninjaTrap.LifeCheck())
				{
					std::cout << "FR4G-TP: " << ninjaTrap.getName() << " died:) aue eeeee!"
				}
				else if (this->_EnergyPoints >= 5)
				{
					this->rangedAttack(ninjaTrap.getName());
					ninjaTrap.takeDamage(this->_RangedAttackDamage);
					this->_EnergyPoints -= 5;
				}
				else
				{
					std::cout << "FR4G-TP: Oy ouo yoou yo y " << this->_Name << " not enough Energy Points!" << std::endl;
				}
				break ;
			case 1:
				if (!ninjaTrap.LifeCheck())
				{
					std::cout << "FR4G-TP: " << ninjaTrap.getName() << " died:) aue eeeee!"
				}
				else if (this->_EnergyPoints >= 60)
				{
					this->meleeAttack(ninjaTrap.getName());
					ninjaTrap.takeDamage(this->_MeleeAttackDamage);
					this->_EnergyPoints -= 60;
				}
				else
				{
					std::cout << "FR4G-TP: Oy ouo yoou yo y " << this->_Name << " not enough Energy Points!" << std::endl;
				}
		}
	}
	else
	{
		std::cout << "FR4G-TP: " << this->_Name << ": I can't attack, I'm dead! :(9(13" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap)
{
	if (this->LifeCheck())
	{
		switch (rand() % 2)
		{
			case 0:
				if (!clapTrap.LifeCheck())
				{
					std::cout << "FR4G-TP: " << clapTrap.getName() << " died:) aue eeeee!"
				}
				else if (this->_EnergyPoints >= 5)
				{
					this->rangedAttack(clapTrap.getName());
					clapTrap.takeDamage(this->_RangedAttackDamage);
					this->_EnergyPoints -= 5;
				}
				else
				{
					std::cout << "FR4G-TP: Oy ouo yoou yo y " << this->_Name << " not enough Energy Points!" << std::endl;
				}
				break ;
			case 1:
				if (!clapTrap.LifeCheck())
				{
					std::cout << "FR4G-TP: " << clapTrap.getName() << " died:) aue eeeee!"
				}
				else if (this->_EnergyPoints >= 60)
				{
					this->meleeAttack(clapTrap.getName());
					clapTrap.takeDamage(this->_MeleeAttackDamage);
					this->_EnergyPoints -= 60;
				}
				else
				{
					std::cout << "FR4G-TP: Oy ouo yoou yo y " << this->_Name << " not enough Energy Points!" << std::endl;
				}
				break ;
		}
	}
	else
	{
		std::cout << "FR4G-TP: " << this->_Name << ": I can't attack, I'm dead! :(9(13" << std::endl;
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &fragTrap)
{

}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap)
{

}
