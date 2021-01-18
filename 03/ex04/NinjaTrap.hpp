//
// Created by Mahmud Jego on 1/17/21.
//

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(const std::string& Name);
	NinjaTrap(const NinjaTrap& ninjaTrap);
	NinjaTrap& operator=(const NinjaTrap& ninjaTrap);
	virtual ~NinjaTrap();

	void ninjaShoebox(NinjaTrap& ninjaTrap);
	void ninjaShoebox(ClapTrap& clapTrap);
	void ninjaShoebox(FragTrap& fragTrap);
	void ninjaShoebox(ScavTrap& scavTrap);
};

#endif //NINJATRAP_HPP
