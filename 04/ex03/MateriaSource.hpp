//
// Created by Mahmud Jego on 1/23/21.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(const MateriaSource&);
	MateriaSource& operator=(const MateriaSource&);
	~MateriaSource();
	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);

private:
	AMateria *_Materia[4];
	int _AmountMateria;
};


#endif //MATERIASOURCE_HPP
