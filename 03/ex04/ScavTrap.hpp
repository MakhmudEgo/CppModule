//
// Created by Mahmud Jego on 1/16/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(const std::string& Name);
	ScavTrap(const ScavTrap& fragTrap);
	ScavTrap& operator=(const ScavTrap& fragTrap);
	virtual ~ScavTrap();
	void challengeNewcomer() const;
};


#endif //SCAVTRAP_HPP
