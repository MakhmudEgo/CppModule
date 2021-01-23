//
// Created by Mahmud Jego on 1/23/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
		: _AmountMateria(0)
{
	this->_Materia[0] = nullptr;
	this->_Materia[1] = nullptr;
	this->_Materia[2] = nullptr;
	this->_Materia[3] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
: _AmountMateria(0)
{
	this->_Materia[0] = nullptr;
	this->_Materia[1] = nullptr;
	this->_Materia[2] = nullptr;
	this->_Materia[3] = nullptr;
	operator=(materiaSource);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_AmountMateria; ++i)
	{
		delete this->_Materia[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if (this != &materiaSource && materiaSource._AmountMateria)
	{
		for (int i = 0; i < this->_AmountMateria; ++i)
		{
			delete this->_Materia[i];
			this->_Materia[i] = nullptr;
		}
		for (int i = 0; i < materiaSource._AmountMateria; ++i)
		{
			this->_Materia[i] = materiaSource._Materia[i]->clone();
		}
		this->_AmountMateria = materiaSource._AmountMateria;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	if (materia && this->_AmountMateria < 4)
	{
		this->_Materia[this->_AmountMateria++] = materia;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < this->_AmountMateria; ++i)
	{
		if (this->_Materia[i]->getType() == type)
		{
			return (this->_Materia[i]->clone());
		}
	}
	return nullptr;
}
