//
// Created by Mahmud Jego on 1/20/21.
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &tacticalMarine)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	operator=(tacticalMarine);
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &tacticalMarine)
{
	if (this != &tacticalMarine)
		return (*this);
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const
{
	return (new TacticalMarine);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
