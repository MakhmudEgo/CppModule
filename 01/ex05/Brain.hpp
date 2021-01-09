//
// Created by Mahmud Jego on 1/9/21.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain {
public:
	Brain();

	void InfoAboutBrain() const;

	std::string identify () const;

private:
	std::string szWeight;
	int nIQ;
};


#endif //BRAIN_HPP
