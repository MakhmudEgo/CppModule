//
// Created by Mahmud Jego on 1/9/21.
//

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "ZombieEvent.hpp"

class ZombieHorde {
public:
	ZombieHorde(int nAmountZombie);

	~ZombieHorde();

	void Clear();

	void announce() const;

private:
	Zombie **ppzZombie;
	int _nAmountZombie;
};


#endif //ZOMBIEHORDE_HPP
