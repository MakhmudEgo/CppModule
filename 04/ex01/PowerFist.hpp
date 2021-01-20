//
// Created by Mahmud Jego on 1/19/21.
//

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist();
	PowerFist(const PowerFist &powerFist);
	PowerFist& operator=(const PowerFist& powerFist);
	virtual ~PowerFist();
	virtual void attack() const;
};

#endif //POWERFIST_HPP
