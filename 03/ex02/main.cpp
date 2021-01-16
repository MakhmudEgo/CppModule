//
// Created by Mahmud Jego on 1/13/21.
//

#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
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

	FragTrap galiza("Galiza");

	// ScavTrap
	ScavTrap scavTrap("Scopycat");
	scavTrap.meleeAttack("Galiza");
	scavTrap.rangedAttack("Galiza");
	scavTrap.takeDamage(20);
	scavTrap.beRepaired(20);
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();

	return (0);
}