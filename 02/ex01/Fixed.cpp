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
		this->nN = fixed.nN;
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
	this->nN = raw * (1 << Fixed::nBits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const
{
	return ((float)this->nN / (float)(1 << Fixed::nBits));
}

int Fixed::toInt() const
{
	return (this->nN / (1 << Fixed::nBits));
}

Fixed::Fixed(const float &fN)
{
	std::cout << "Float constructor called" << std::endl;
	this->nN = (int)roundf(fN * (1 << Fixed::nBits));
}

Fixed::Fixed(const int &nN)
{
	std::cout << "Int constructor called" << std::endl;
	this->nN = nN * (1 << Fixed::nBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}