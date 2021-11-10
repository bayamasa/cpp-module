#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int raw_bits;
	static const int fraction_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &obj);
	int getRawBits(void) const;
	void setRawBits( int const raw );
	Fixed &operator=(const Fixed &other);
};

#endif
