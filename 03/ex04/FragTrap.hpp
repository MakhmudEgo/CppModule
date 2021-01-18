//
// Created by Mahmud Jego on 1/13/21.
//

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string& Name);
	FragTrap(const FragTrap& fragTrap);
	FragTrap& operator=(const FragTrap& fragTrap);
	virtual ~FragTrap();
	void vaulthunter_dot_exe(std::string const & target);
};


#endif //FRAGTRAP_HPP
