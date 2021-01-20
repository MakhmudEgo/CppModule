//
// Created by Mahmud Jego on 1/19/21.
//

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "iostream"

class Victim {
public:
	Victim(const std::string &name);
	Victim(const Victim& victim);
	Victim& operator=(const Victim& victim);
	virtual ~Victim();
	const std::string &getName() const;
	virtual void getPolymorphed() const;

private:
	std::string _Name;
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif //VICTIM_HPP
