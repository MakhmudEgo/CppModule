//
// Created by Mahmud Jego on 1/19/21.
//

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int main()
{
//	AWeapon aWeapon("test", 100, 100); Abstract Class

	PowerFist powerFist;
	PlasmaRifle plasmaRifle;

	powerFist.attack();
	plasmaRifle.attack();

	AWeapon& LaWeapon = powerFist;
	AWeapon& LaWeapon1 = plasmaRifle;

	LaWeapon.attack();
	LaWeapon1.attack();

	std::cout << std::endl << std::endl;
	RadScorpion radScorpion;
	radScorpion.takeDamage(3);
	std::cout << radScorpion.getHP() << std::endl;
	std::cout << std::endl << std::endl;

	Enemy *enemy = new RadScorpion;
	std::cout << enemy->getType() << std::endl;
	delete enemy;
	std::cout << std::endl << std::endl;

	SuperMutant superMutant;
	std::cout << superMutant.getType() << " HP: " << superMutant.getHP() << std::endl;
	superMutant.takeDamage(30);
	std::cout << superMutant.getType() << " HP: " << superMutant.getHP() << std::endl;
	std::cout << std::endl << std::endl;


	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	delete me;
//	delete b;
	delete pr;
	delete pf;
	return (0);
}