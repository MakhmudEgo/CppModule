//
// Created by Mahmud Jego on 1/8/21.
//

#include "ZombieHorde.hpp"
#include <cstdlib>
#include <ctime>

void randomChump()
{
	std::string ppszTypes[] = {
			"gangster", "police", "doctor",
			"trader", "streetwalker", "tramp"
	};

	std::string ppszNames[] = {
			"drina", "lmidori", "ndreadno", "avallie",
			"scopycat", "hharrold", "jcorwin", "mizola"
	};

	Zombie zZombie(ppszNames[rand() % 8], ppszTypes[rand() % 6]);
	zZombie.announce();
}

int main()
{
/*	std::string ppszNames[] = {
			"drina", "lmidori", "ndreadno", "avallie",
			"scopycat", "hharrold", "jcorwin", "mizola"
	};

	srand(time(NULL));

	Zombie *pZombie = new Zombie(ppszNames[rand() % 8], "King");
	pZombie->announce();
	delete pZombie;
	std::cout << std::endl;

	Zombie *pZombie1 = new Zombie(ppszNames[rand() % 8], "Queen");
	pZombie1->announce();
	delete pZombie1;
	std::cout << std::endl;

	randomChump();
	std::cout << std::endl;

	ZombieEvent zombieEvent;
	zombieEvent.setZombieType("streetwalker");

	Zombie *pZombie2 = zombieEvent.newZombie(ppszNames[rand() % 8]);
	pZombie2->announce();
	delete pZombie2;*/
	int nAmountZombie = 7;

	ZombieHorde hello(nAmountZombie);
	hello.Clear();
}
