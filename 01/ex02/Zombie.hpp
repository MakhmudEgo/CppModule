//
// Created by Mahmud Jego on 1/8/21.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie {
public:
	Zombie(const std::string& szName, const std::string& szType);

	~Zombie();

	void announce() const;
private:
	std::string szName;
	std::string szType;
};


#endif //ZOMBIE_HPP
