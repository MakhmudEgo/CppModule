//
// Created by Mahmud Jego on 1/20/21.
//

#include "Squad.hpp"

Squad::Squad()
: _AmountUnits(0), _iSpaceMarine(nullptr)
{}

Squad::~Squad()
{
	if (this->_AmountUnits)
	{
		for (int i = 0; i < this->_AmountUnits; ++i)
		{
			delete this->_iSpaceMarine[i];
		}
		delete this->_iSpaceMarine;
	}
}

int Squad::getCount() const
{
	return (this->_AmountUnits);
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (i < this->_AmountUnits && i > -1)
		return (this->_iSpaceMarine[i]);
	return (nullptr);
}

int Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine **tmp = new ISpaceMarine*[this->_AmountUnits + 1];
	for (int i = 0; i < this->_AmountUnits; ++i)
	{
		tmp[i] = this->_iSpaceMarine[i];
	}
	tmp[this->_AmountUnits++] = marine;
	if (this->_AmountUnits > 1)
	{
		delete this->_iSpaceMarine;
	}
	this->_iSpaceMarine = tmp;
	return (this->_AmountUnits);
}
