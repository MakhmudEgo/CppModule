//
// Created by Mahmud Jego on 1/20/21.
//

#include "Squad.hpp"

Squad::Squad()
: _AmountUnits(0), _iSpaceMarine(nullptr)
{}

Squad::~Squad()
{}

int Squad::getCount() const
{
	return (this->_AmountUnits);
}

ISpaceMarine *Squad::getUnit(int i) const
{
	return NULL;
}

int Squad::push(ISpaceMarine *marine)
{
	if (!this->_AmountUnits)
	{

	}
	return 0;
}
