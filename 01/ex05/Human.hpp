//
// Created by Mahmud Jego on 1/9/21.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human {
public:
	std::string identify() const;

	const Brain& getBrain() const;
private:
	const Brain bHuman;
};


#endif //HUMAN_HPP
