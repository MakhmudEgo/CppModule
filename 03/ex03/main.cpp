//
// Created by Mahmud Jego on 1/13/21.
//

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));

/*	FragTrap galiza("Galiza");
	ScavTrap scopycat("Scopycat");
	ClapTrap clapTrap("King", 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000);

	// FragTrap
	FragTrap fragtrap("Monkey");
	fragtrap.meleeAttack("Galiza");
	fragtrap.rangedAttack("Galiza");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(20);
	fragtrap.vaulthunter_dot_exe("Galiza");
	fragtrap.vaulthunter_dot_exe("Galiza");
	fragtrap.vaulthunter_dot_exe("Galiza");
	fragtrap.vaulthunter_dot_exe("Galiza");
	fragtrap.vaulthunter_dot_exe("Galiza");

	// ScavTrap
	ScavTrap scavTrap("Bear");
	scavTrap.meleeAttack("Scopycat");
	scavTrap.rangedAttack("Scopycat");
	scavTrap.takeDamage(20);
	scavTrap.beRepaired(20);
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();*/

	NinjaTrap ego("Ego");
	NinjaTrap king("King");

	king.ninjaShoebox(ego);
	king.ninjaShoebox(ego);
	king.ninjaShoebox(ego);


	return (0);
}