//
// Created by Mahmud Jego on 1/12/21.
//

#include "Fixed.hpp"

const int Fixed::nBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->nN = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(fixed);
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (&fixed != this)
	{
		this->nN = fixed.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->nN;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->nN = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
