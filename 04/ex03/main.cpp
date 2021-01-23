//
// Created by Mahmud Jego on 1/21/21.
//


#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "hello day 04 ex 03" << std::endl;
	Character character("hello");
	AMateria *aMateria = new Ice;
	AMateria *aMateria1 = new Ice;
	AMateria *aMateria2 = new Cure;
	AMateria *aMateria3 = new Ice;
	character.equip(aMateria);
	character.equip(aMateria1);
	character.equip(aMateria2);
	character.equip(aMateria3);
	character.equip(aMateria);
	character.use(2, character);
	character.use(1, character);
/*	character.unequip(0);
	character.unequip(1);
	character.unequip(1);
	character.unequip(1);
	character.unequip(1);*/
	character.use(1, character);
//	character.unequip(0);

	Character character1("world");
	AMateria *aMateria4 = new Cure;
	character1.equip(aMateria4);
	std::cout << "TEST CPY CONSTR ANS OPER ASSIG" << std::endl;
	character1 = character;
	Character character2(character1);
	std::cout << character.getName() << std::endl;
	std::cout << character1.getName() << std::endl;
	std::cout << character2.getName() << std::endl;
	character.use(0, character);
	character1.use(0, character);
	character2.use(0, character);
	character.use(1, character);
	character1.use(1, character);
	character2.use(1, character);
	character.use(2, character);
	character1.use(2, character);
	character2.use(2, character);

//	delete aMateria;
/*	delete aMateria1;
	delete aMateria2;
	delete aMateria3;*/
	std::cout << std::endl << std::endl;

	AMateria *aMateria5 = new Ice;
	AMateria *aMateria6 = new Cure;
	AMateria *aMateria7 = new Cure;
	AMateria *aMateria8 = new Ice;
	AMateria *aMateria9 = new Ice;

	MateriaSource materiaSource;
	materiaSource.learnMateria(aMateria5);
	materiaSource.learnMateria(aMateria6);
	materiaSource.learnMateria(aMateria7);
	materiaSource.learnMateria(aMateria8);
	materiaSource.learnMateria(aMateria9);

	AMateria *aMateria10 = materiaSource.createMateria("ice");
	std::cout << aMateria10->getType() << std::endl;

	MateriaSource materiaSource1(materiaSource);
	MateriaSource materiaSource2;
	materiaSource2 = materiaSource1;
	delete aMateria9;
	delete aMateria10;
	std::cout << std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}