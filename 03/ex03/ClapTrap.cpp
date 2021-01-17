//
// Created by Mahmud Jego on 1/16/21.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &Name, const int& HitPoint,
				   const int& MaxHitPoints, const int& EnergyPoints,
				   const int& MaxEnergyPoints, const int& Level,
				   const int& MeleeAttackDamage, const int& RangedAttackDamage,
				   const int& ArmorDamageReduction)
{
	std::cout << "Constructor: The Superhero ClapTrap, " << Name << " was born:)" << std::endl;
	this->_HitPoint = HitPoint;
	this->_MaxHitPoints = MaxHitPoints;
	this->_EnergyPoints = EnergyPoints;
	this->_MaxEnergyPoints = MaxEnergyPoints;
	this->_Level = Level;
	this->_Name = Name;
	this->_MeleeAttackDamage = MeleeAttackDamage;
	this->_RangedAttackDamage = RangedAttackDamage;
	this->_ArmorDamageReduction = ArmorDamageReduction;
}
ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	operator=(clapTrap);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor: The Superhero ClapTrap " << this->_Name << " died:(" << std::endl;
}


void ClapTrap::rangedAttack(const std::string &target)
{
	std::cout << "FR4G-TP: " << this->_Name << " attacks " <<
	target << " at range, causing " << this->_RangedAttackDamage <<
	" points of damage!" << std::endl
	<< getRandomFunnyQuote() << std::endl;
}

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << "FR4G-TP: " << this->_Name << " attacks " <<
	target << " at melee, causing " << this->_MeleeAttackDamage <<
	" points of damage!" << std::endl
	<< getRandomFunnyQuote() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "FR4G-TP: "<< this->_Name << " died)), Hit Point "
		<< this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP: " << this->_Name << " take " <<
				  amount << " damage, lol!" << std::endl;
		this->_HitPoint -= ((int)amount - this->_ArmorDamageReduction);
		this->_HitPoint = this->_HitPoint < 0 ? 0 : this->_HitPoint;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HitPoint >= this->_MaxHitPoints)
	{
		std::cout << "FR4G-TP:""Hit Point " << this->_HitPoint << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP: " << this->_Name << " be repaired " <<
				  amount << " Hit Points, kek!" << std::endl;
		this->_HitPoint += (int)amount;
		this->_HitPoint = this->_HitPoint > this->_MaxHitPoints ? this->_MaxHitPoints : this->_HitPoint;
	}
}

std::string ClapTrap::getRandomFunnyQuote() const
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

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if (this != &clapTrap)
	{
		this->_HitPoint = clapTrap._HitPoint;
		this->_MaxHitPoints = clapTrap._MaxHitPoints;
		this->_EnergyPoints = clapTrap._EnergyPoints;
		this->_MaxEnergyPoints = clapTrap._MaxEnergyPoints;
		this->_Level = clapTrap._Level;
		this->_Name = clapTrap._Name;
		this->_MeleeAttackDamage = clapTrap._MeleeAttackDamage;
		this->_RangedAttackDamage = clapTrap._RangedAttackDamage;
		this->_ArmorDamageReduction = clapTrap._ArmorDamageReduction;
	}
	return (*this);
}

const std::string &ClapTrap::getName() const
{
	return (this->_Name);
}

const int& ClapTrap::getHitPoint() const
{
	return (this->_HitPoint);
}

bool ClapTrap::LifeCheck() const
{
	if (this->_HitPoint)
		return (true);
	return (false);
}
