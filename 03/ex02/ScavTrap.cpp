//
// Created by Mahmud Jego on 1/16/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& Name)
{
	_HitPoint = 100;
	_MaxHitPoints = 100;
	_EnergyPoints = 50;
	_MaxEnergyPoints = 50;
	_Level = 1;
	_Name = Name;
	_MeleeAttackDamage = 20;
	_RangedAttackDamage = 15;
	_ArmorDamageReduction = 3;
	std::cout << "The Superhero ScavTrap, " << this->_Name << " was born:)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & fragTrap)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	operator=(fragTrap);
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
	std::cout << "The Superhero ScavTrap " << this->_Name << " died:(" << std::endl;
}

void ScavTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
			  target << " at range, causing " << this->_RangedAttackDamage <<
			  " points of damage!" << std::endl
			  << getRandomFunnyQuote() << std::endl;
}

void ScavTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
			  target << " at melee, causing " << this->_MeleeAttackDamage <<
			  " points of damage!" << std::endl
			  << getRandomFunnyQuote() << std::endl;

}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_Name << " take " <<
				  amount << " damage, lol!" << std::endl;
		this->_HitPoint -= ((int)amount - this->_ArmorDamageReduction);
		this->_HitPoint = this->_HitPoint < 0 ? 0 : this->_HitPoint;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoint >= this->_MaxHitPoints)
	{
		std::cout << "Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_Name << " be repaired " <<
				  amount << " Hit Points, kek!" << std::endl;
		this->_HitPoint += (int)amount;
		this->_HitPoint = this->_HitPoint > this->_MaxHitPoints ? this->_MaxHitPoints : this->_HitPoint;
	}
}

std::string ScavTrap::getRandomFunnyQuote() const
{
	std::string pszQuotes[] = {
			"Boogie time!",
			"Laaasers!",
			"Psychedelic, man!",
			"Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
			"One for you, one for you, one for you!",
			"It's time for my free grenade giveaway!",
			"How many ways can I say... THROWING GRENADE?!",
			"Grenade confetti!",
			"I brought you a present: EXPLOSIONS!"
	};
	return (pszQuotes[rand() % 9]);
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
