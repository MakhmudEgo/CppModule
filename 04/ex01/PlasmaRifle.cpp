//
// Created by Mahmud Jego on 1/19/21.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
: AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle)
: AWeapon(plasmaRifle)
{}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle)
{
	AWeapon::operator=(plasmaRifle);
	return (*this);
}
