//
// Created by Mahmud Jego on 1/9/21.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
public:
	Weapon(const std::string& szType);

	const std::string& getType() const;

	void setType(const std::string& szType);
private:
	std::string _szType;
};


#endif //WEAPON_HPP
