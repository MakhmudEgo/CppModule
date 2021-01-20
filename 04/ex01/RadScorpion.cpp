//
// Created by Mahmud Jego on 1/20/21.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
: Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radScorpion)
: Enemy(radScorpion) {}

RadScorpion &RadScorpion::operator=(const RadScorpion &radScorpion)
{
	Enemy::operator=(radScorpion);
	return (*this);
}
