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

	std::cout << "COPY AND ASSIG TEST" << std::endl;
	Squad squad;
	squad.push(tacticalMarine.clone());
	squad.push(assaultTerminator.clone());
	ISpaceMarine* testSquad = squad.getUnit(0);
	ISpaceMarine* testSquad1 = squad.getUnit(1);
	testSquad->rangedAttack();
	testSquad1->rangedAttack();
	testSquad->battleCry();
	testSquad1->battleCry();
	Squad squad1;
	squad1 = squad;
	Squad squad2(squad1);
	std::cout << squad.getCount() << std::endl;
	std::cout << squad1.getCount() << std::endl;
	std::cout << squad2.getCount() << std::endl;
	squad.getUnit(0)->battleCry();
	squad1.getUnit(0)->battleCry();
	squad2.getUnit(0)->battleCry();
	squad.getUnit(1)->battleCry();
	squad1.getUnit(1)->battleCry();
	squad2.getUnit(1)->battleCry();
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
