//
// Created by Mahmud Jego on 1/13/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& Name)
{
	_HitPoint = 100;
	_MaxHitPoints = 100;
	_EnergyPoints = 100;
	_MaxEnergyPoints = 100;
	_Level = 1;
	_Name = Name;
	_MeleeAttackDamage = 30;
	_RangedAttackDamage = 20;
	_ArmorDamageReduction = 5;
	std::cout << "The Superhero " << this->_Name << " was born:)" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "The Superhero " << this->_Name << " died:(" << std::endl;
}

void FragTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
	target << " at range, causing " << this->_RangedAttackDamage << " points of damage!" << std::endl
	<< getRandomFunnyQuote() << std::endl;
}

void FragTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP " << this->_Name << " attacks " <<
	target << " at melee, causing " << this->_MeleeAttackDamage << " points of damage!" << std::endl
	<< getRandomFunnyQuote() << std::endl;

}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_Name << " take " << amount << " damage, lol!" << std::endl;
		this->_HitPoint -= ((int)amount - this->_ArmorDamageReduction);
		this->_HitPoint = this->_HitPoint < 0 ? 0 : this->_HitPoint;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoint >= this->_MaxHitPoints)
	{
		std::cout << "Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP " << this->_Name << " be repaired " << amount << " Hit Points, kek!" << std::endl;
		this->_HitPoint += (int)amount;
		this->_HitPoint = this->_HitPoint > this->_MaxHitPoints ? this->_MaxHitPoints : this->_HitPoint;
	}
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
		std::cout << "FR4G-TP " << this->_Name << " attacks " <<
		target << ' ' << pszAttack[rand() % 5] <<" causing " << 1 + rand() % 99 << " points of damage!" << std::endl
		<< getRandomFunnyQuote() << std::endl;
		this->_EnergyPoints -= 25;
	}
}

std::string FragTrap::getRandomFunnyQuote() const
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

