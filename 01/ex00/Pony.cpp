//
// Created by Mahmud Jego on 1/8/21.
//

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "call Constructor without Arg" << std::endl;
	this->_szName = "King";
	this->_szBreed = "Welsh";
	this->_unAge = 3;
	this->_unDeadAge = this->_unAge + 10;
}

Pony::Pony(const std::string &szNamePony, const std::string &szBreedPony, unsigned int unAgePony)
{
	std::cout << "call Constructor with Arg" << std::endl;
	this->_szName = szNamePony;
	this->_szBreed = szBreedPony;
	this->_unAge = unAgePony;
	this->_unDeadAge = this->_unAge + 10;
}

Pony::~Pony()
{
	std::cout << "call Destructor, Memory Cleared!" << std::endl;
}

void Pony::Work()
{
	if (this->_unAge >= this->_unDeadAge)
	{
		std::cout << _szName << ", died :(";
	}
	else
	{
		this->_unAge++;
		if (this->_unAge >= this->_unDeadAge - 4)
		{
			std::cout << this->_szName << " Worked and got sick(";
		}
		else
		{
			std::cout << _szName << " Worked and he(she) is " << this->_unAge << " years old";
		}
	}
	std::cout << std::endl;
}

void Pony::Work(const unsigned int &unAmountTime)
{
	if (this->_unAge >= this->_unDeadAge)
	{
		std::cout << _szName << ", died :(";
	}
	else
	{
		this->_unAge += unAmountTime;
		if (this->_unAge >= this->_unDeadAge)
		{
			std::cout << _szName << ", died :(";
		}
		else if (this->_unAge >= this->_unDeadAge - 4)
		{
			std::cout << this->_szName << " Worked and got sick(";
		}
		else
		{
			std::cout << _szName << " Worked and he(she) is " << this->_unAge << " years old";
		}
	}
	std::cout << std::endl;
}

void Pony::Relax(const unsigned int &unAmountTime)
{
	if (this->_unAge < this->_unDeadAge)
	{
		this->_unDeadAge += unAmountTime;
		std::cout << _szName << " Relaxed and increased life by " << unAmountTime << " years)";
	}
	else
	{
		std::cout << _szName << ", died :(";
	}
	std::cout << std::endl;
}

void Pony::Relax()
{
	if (this->_unAge < this->_unDeadAge)
	{
		this->_unDeadAge += 1;
		std::cout << _szName << " Relaxed and increased life by " << 1 << " years)";
	}
	else
	{
		std::cout << _szName << ", died :(";
	}
	std::cout << std::endl;
}

void Pony::IsLife() const
{
	if (this->_unAge >= this->_unDeadAge)
	{
		std::cout << "NO:(";
	}
	else if (this->_unAge >= this->_unDeadAge - 4)
	{
		std::cout << "Yes, But " << this->_szName << " is sick:(";
	}
	else
	{
		std::cout << "YES:)";
	}
	std::cout << std::endl;
}

void Pony::getInfoAboutPony() const
{
	if (this->_unAge >= this->_unDeadAge)
	{
		std::cout << this->_szName << ", Breed – " << _szBreed << ", died at the age of " << this->_unAge;
	}
	else
	{
		std::cout << this->_szName << ", Breed – " << _szBreed << ", " << this->_unAge << " years old";
	}
	std::cout << std::endl;
}
