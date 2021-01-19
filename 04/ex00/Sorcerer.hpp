//
// Created by Mahmud Jego on 1/19/21.
//

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer {
public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer& sorcerer);
	Sorcerer& operator=(const Sorcerer& sorcerer);
	virtual ~Sorcerer();
	const std::string &getName() const;
	const std::string &getTitle() const;
	void polymorph(Victim const &victim) const;

private:
	std::string _Name;
	std::string _Title;
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer);


#endif //SORCERER_HPP
