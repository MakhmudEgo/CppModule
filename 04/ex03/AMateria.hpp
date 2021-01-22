//
// Created by Mahmud Jego on 1/21/21.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria {
private:
	std::string _Type;
	unsigned int _Xp;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria&);
	AMateria& operator=(const AMateria&);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //AMATERIA_HPP
