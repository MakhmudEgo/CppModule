//
// Created by Mahmud Jego on 1/12/21.
//

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed();

	Fixed(const Fixed& fixed);

	Fixed& operator=(const Fixed& fixed);

	int getRawBits() const;

	void setRawBits(const int raw);

	~Fixed();
private:
	static const int nBits;
	int nN;
};

#endif //FIXED_HPP
