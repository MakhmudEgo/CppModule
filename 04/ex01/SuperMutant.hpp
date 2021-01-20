//
// Created by Mahmud Jego on 1/20/21.
//

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant();
	SuperMutant(const SuperMutant &superMutant);
	SuperMutant& operator=(const SuperMutant& superMutant);
	virtual ~SuperMutant();
	void takeDamage(int);

};


#endif //SUPERMUTANT_HPP
