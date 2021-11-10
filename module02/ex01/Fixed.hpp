#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
	int raw_bits;
	static const int fraction_bits = 8;
public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	~Fixed();
	Fixed(const Fixed &obj);
	int getRawBits(void) const;
	void setRawBits( int const raw );
	float toFloat(void) const;
	int toInt(void) const;
	Fixed &operator=(const Fixed &other);
};

std::ostream &operator<<(std::ostream &os, Fixed const &other);

#endif
