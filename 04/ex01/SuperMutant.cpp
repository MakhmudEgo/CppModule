//
// Created by Mahmud Jego on 1/20/21.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
: Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &superMutant)
: Enemy(superMutant)
{}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - 3);
}

SuperMutant &SuperMutant::operator=(const SuperMutant &superMutant)
{
	Enemy::operator=(superMutant);
	return *this;
}
