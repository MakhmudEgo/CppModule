//
// Created by Mahmud Jego on 1/12/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();

	Fixed(const Fixed& fixed);

	Fixed(const float& fN);

	Fixed(const int& nN);

	~Fixed();

	Fixed& operator=(const Fixed& fixed);

	int getRawBits() const;

	void setRawBits(const int raw);

	float toFloat( void ) const;

	int toInt( void ) const;
private:
	static const int nBits;
	int nN;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif //FIXED_HPP
