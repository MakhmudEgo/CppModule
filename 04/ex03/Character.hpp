//
// Created by Mahmud Jego on 1/21/21.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class Character : public ICharacter {
public:
	Character(const std::string &name);
	Character(const Character&);
	Character& operator=(const Character&);
	virtual ~Character();
	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

private:
	AMateria *_Materia[4];
	int _AmountMateria;
	std::string _Name;
};

#endif //CHARACTER_HPP
