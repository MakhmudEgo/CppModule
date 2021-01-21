//
// Created by Mahmud Jego on 1/20/21.
//

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	TacticalMarine tacticalMarine;
	tacticalMarine.battleCry();
	tacticalMarine.meleeAttack();
	tacticalMarine.rangedAttack();
	std::cout << std::endl << std::endl;

	ISpaceMarine* cloneTac = tacticalMarine.clone();
	cloneTac->rangedAttack();
	delete cloneTac;
	std::cout << std::endl << std::endl;

	AssaultTerminator assaultTerminator;
	assaultTerminator.battleCry();
	assaultTerminator.meleeAttack();
	assaultTerminator.rangedAttack();
	std::cout << std::endl << std::endl;

	ISpaceMarine* cloneAssa = assaultTerminator.clone();
	cloneAssa->meleeAttack();
	delete cloneAssa;
	std::cout << std::endl << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
