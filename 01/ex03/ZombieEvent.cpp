//
// Created by Mahmud Jego on 1/8/21.
//

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(const std::string &szNewType)
{
	this->_szType = szNewType;
}

Zombie *ZombieEvent::newZombie(std::string name) const
{
	Zombie *zZombie = new Zombie(name, this->_szType);

	return (zZombie);
}
