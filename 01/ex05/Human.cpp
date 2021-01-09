//
// Created by Mahmud Jego on 1/9/21.
//

#include "Human.hpp"

std::string Human::identify() const
{
	return (this->bHuman.identify());
}

const Brain &Human::getBrain() const
{
	return (this->bHuman);
}
