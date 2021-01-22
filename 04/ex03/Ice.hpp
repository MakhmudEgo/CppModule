//
// Created by Mahmud Jego on 1/21/21.
//

#ifndef ICE_HPP
#define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice&);
	Ice& operator=(const Ice&);
	~Ice();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif //ICE_HPP
