//
// Created by Mahmud Jego on 1/9/21.
//

#include "Brain.hpp"
#include <iostream>
#include <sstream>

std::string Brain::identify() const
{
	std::stringstream res;

	res << this;
	return (res.str());
}

Brain::Brain()
{
	this->nIQ = 43;
	this->szWeight = "200 gram";
}

void Brain::InfoAboutBrain() const
{
	std::cout << "IQ  - " << this->nIQ << ", Weight - " << this->szWeight << std::endl;
}
