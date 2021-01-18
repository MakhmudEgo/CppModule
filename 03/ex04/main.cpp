//
// Created by Mahmud Jego on 1/13/21.
//

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	srand(time(NULL));

	FragTrap galiza("Galiza");
	ScavTrap scopycat("Scopycat");
	ClapTrap clapTrap("King", 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000);
	clapTrap.meleeAttack("Scopycat");
	clapTrap.rangedAttack("Scopycat");
	clapTrap.takeDamage(20);
	clapTrap.beRepaired(20);

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
	scavTrap.challengeNewcomer();

	NinjaTrap ego("Ego");
	NinjaTrap king("King");

	//NinjaTrap
	king.ninjaShoebox(ego);
	//Fragtrap
	king.ninjaShoebox(galiza);
	//ScavTrap
	king.ninjaShoebox(scopycat);
	//ClapTrap
	king.ninjaShoebox(clapTrap);
	king.meleeAttack("Scopycat");
	king.rangedAttack("Scopycat");
	king.takeDamage(20);
	king.beRepaired(20);

	SuperTrap superTrap("Mem");

/*	SuperTrap Mike("Mike");
	Mike.meleeAttack("Scopycat");
	Mike.rangedAttack("Scopycat");
	Mike.beRepaired(1);
	Mike.ninjaShoebox(ego);
	Mike.ninjaShoebox(galiza);
	Mike.ninjaShoebox(scopycat);
	Mike.ninjaShoebox(clapTrap);
	Mike.vaulthunter_dot_exe("Scopycat");*/

	return (0);
}