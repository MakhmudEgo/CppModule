//
// Created by Mahmud Jego on 1/13/21.
//

#include "FragTrap.hpp"

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

	return (0);
}