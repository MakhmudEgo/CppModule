//
// Created by Mahmud Jego on 1/9/21.
//

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int nAmountZombie)
{
	std::cout << "call ZombieHorde Constructor" << std::endl << std::endl;
	this->_nAmountZombie = nAmountZombie;
	std::string ppszTypes[] = {
			"gangster", "police", "doctor",
			"trader", "streetwalker", "tramp"
	};

	std::string ppszNames[] = {
			"drina", "lmidori", "ndreadno", "avallie",
			"scopycat", "hharrold", "jcorwin", "mizola"
	};
	srand(time(NULL));

	ZombieEvent zZombieEvent;
	ppzZombie = new Zombie*[nAmountZombie];
	for (int i = 0; i < nAmountZombie; i++)
	{
		zZombieEvent.setZombieType(ppszTypes[rand() % 6]);
		ppzZombie[i] = zZombieEvent.newZombie(ppszNames[rand() % 8]);
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "call ZombieHorde Destructor" << std::endl << std::endl;
	for (int i = 0; i < this->_nAmountZombie; ++i)
	{
		delete this->ppzZombie[i];
	}
	delete this->ppzZombie;
}

void ZombieHorde::announce() const
{
	for (int i = 0; i < _nAmountZombie; ++i)
	{
		this->ppzZombie[i]->announce();
	}
}
