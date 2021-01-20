//
// Created by Mahmud Jego on 1/19/21.
//

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &plasmaRifle);
	PlasmaRifle& operator=(const PlasmaRifle& plasmaRifle);
	virtual ~PlasmaRifle();
	virtual void attack() const;
};

#endif //PLASMARIFLE_HPP
