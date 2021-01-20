//
// Created by Mahmud Jego on 1/20/21.
//

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine&);
	TacticalMarine& operator=(const TacticalMarine&);
	virtual ~TacticalMarine();
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif //TACTICALMARINE_HPP
