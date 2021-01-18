//
// Created by Mahmud Jego on 1/18/21.
//

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap(const std::string& Name);
	SuperTrap(const SuperTrap& superTrap);
	SuperTrap& operator=(const SuperTrap& superTrap);
	virtual ~SuperTrap();
	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
};


#endif //SUPERTRAP_HPP
