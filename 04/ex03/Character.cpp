//
// Created by Mahmud Jego on 1/21/21.
//

#include "Character.hpp"

const std::string &Character::getName() const
{
	return (this->_Name);
}

void Character::equip(AMateria *m)
{
	if (m && this->_AmountMateria < 4)
	{
		this->_Materia[this->_AmountMateria++] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->_AmountMateria)
	{
		this->_Materia[idx] = nullptr;
		for (int i = idx; i < this->_AmountMateria - 1; ++i)
		{
			this->_Materia[i] = this->_Materia[i + 1];
			this->_Materia[i + 1] = nullptr;
		}
		this->_AmountMateria--;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_AmountMateria)
	{
		this->_Materia[idx]->use(target);
	}
}

Character::Character(const std::string &name)
: _AmountMateria(0), _Name(name)
{
	this->_Materia[0] = nullptr;
	this->_Materia[1] = nullptr;
	this->_Materia[2] = nullptr;
	this->_Materia[3] = nullptr;
}

Character &Character::operator=(const Character &character)
{
	if (this != &character && character._AmountMateria)
	{
		for (int i = 0; i < this->_AmountMateria; ++i)
		{
			delete this->_Materia[i];
			this->_Materia[i] = nullptr;
		}
		for (int i = 0; i < character._AmountMateria; ++i)
		{
			this->_Materia[i] = character._Materia[i]->clone();
		}
		this->_AmountMateria = character._AmountMateria;
		this->_Name = character._Name;
	}
	return (*this);
}

Character::Character(const Character &character)
		: _AmountMateria(0)
{
	this->_Materia[0] = nullptr;
	this->_Materia[1] = nullptr;
	this->_Materia[2] = nullptr;
	this->_Materia[3] = nullptr;
	operator=(character);
}

Character::~Character()
{
	if (this->_AmountMateria)
	{
		for (int i = 0; i < this->_AmountMateria; ++i)
		{
			delete this->_Materia[i];
		}
	}
}
