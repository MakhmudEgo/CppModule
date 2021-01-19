//
// Created by Mahmud Jego on 1/19/21.
//

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
public:
	Peon(const std::string &name);
	Peon(const Peon& peon);
	Peon& operator=(const Peon& peon);
	virtual ~Peon();
	void getPolymorphed() const;
};


#endif //PEON_HPP
