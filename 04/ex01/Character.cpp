//
// Created by Mahmud Jego on 1/20/21.
//

#include "Character.hpp"

Character::Character(const std::string &name)
: _Name(name), _AP(40), _AWeapon(nullptr)
{

}

Character::Character(const Character &character)
{
	operator=(character);
}

Character::~Character() {

}

Character &Character::operator=(const Character &character)
{
	if (this != &character)
	{
		this->_Name = character._Name;
		this->_AWeapon = character._AWeapon;
		this->_AP = character._AP;
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return (this->_Name);
}

int Character::getAp() const
{
	return (this->_AP);
}

AWeapon *Character::getAWeapon() const
{
	return (this->_AWeapon);
}

void Character::recoverAP()
{
	this->_AP += 10;
	this->_AP = this->_AP > 40 ? 40 : this->_AP;
}

void Character::equip(AWeapon *aWeapon)
{
	this->_AWeapon = aWeapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->_AWeapon && this->_AWeapon->getAPCost() <= this->_AP)
	{
		std::cout << this->_Name << " attacks " << enemy->getType()
		<< " with a " << this->_AWeapon->getName() << std::endl;
		this->_AP -= this->_AWeapon->getAPCost();
		this->_AWeapon->attack();
		enemy->takeDamage(this->_AWeapon->getDamage());
		if (enemy->getHP() <= 0)
		{
			delete enemy;
		}
	}
}

std::ostream &operator<<(std::ostream &os, const Character &character)
{
	if (character.getAWeapon())
	{
		os << character.getName() << " has " << character.getAp()
		<< " AP and wields a " << character.getAWeapon()->getName() << std::endl;
	}
	else
	{
		os << character.getName() << " has "
		<< character.getAp() << " AP and is unarmed" << std::endl;

	}
	return (os);
}
