//
// Created by Mahmud Jego on 1/20/21.
//

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion
: public Enemy {
public:
	RadScorpion();
	RadScorpion(const RadScorpion &radScorpion);
	RadScorpion& operator=(const RadScorpion& radScorpion);
	virtual ~RadScorpion();
};


#endif //RADSCORPION_HPP
