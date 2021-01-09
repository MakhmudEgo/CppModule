//
// Created by Mahmud Jego on 1/8/21.
//

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent {
public:
	Zombie* newZombie(std::string name) const;

	void setZombieType(const std::string& szNewType);

private:
	std::string _szType;
};


#endif //ZOMBIEEVENT_HPP
