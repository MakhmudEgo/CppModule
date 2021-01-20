//
// Created by Mahmud Jego on 1/20/21.
//

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator&);
	AssaultTerminator& operator=(const AssaultTerminator&);
	virtual ~AssaultTerminator();
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif //ASSAULTTERMINATOR_HPP
