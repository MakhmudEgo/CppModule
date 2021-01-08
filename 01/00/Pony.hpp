//
// Created by Mahmud Jego on 1/8/21.
//

#ifndef INC_01_PONY_HPP
# define INC_01_PONY_HPP

# include <iostream>

class Pony {
public:
	Pony();

	Pony(const std::string& szNamePony, const std::string& szBreedPony, unsigned int unAgePony);

	~Pony();

	void Work();

	void Work(const unsigned int& unAmountTime);

	void Relax();

	void Relax(const unsigned int& unAmountTime);

	void IsLife() const;

	void getInfoAboutPony() const;
private:
	std::string		_szName;
	std::string		_szBreed;
	unsigned int	_unAge;
	unsigned int	_unDeadAge;
};

#endif //INC_01_PONY_HPP
