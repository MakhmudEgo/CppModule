//
// Created by Mahmud Jego on 1/19/21.
//

#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(const PowerFist &powerFist)
: AWeapon(powerFist)
{}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(const PowerFist &powerFist)
{
	AWeapon::operator=(powerFist);
	return (*this);
}
