//
// Created by Mahmud Jego on 1/20/21.
//

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad
: public ISquad {
public:
	Squad();
	~Squad();
	int getCount() const;
	ISpaceMarine *getUnit(int i) const;
	int push(ISpaceMarine *marine);
private:
	int _AmountUnits;
	ISpaceMarine **_iSpaceMarine;

};


#endif //SQUAD_HPP
