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
	static Fixed &min(Fixed &lv, Fixed &rv);
	static Fixed &max(Fixed &lv, Fixed &rv);
	static const Fixed &min(const Fixed &lv, const Fixed &rv);
	static const Fixed &max(const Fixed &lv, const Fixed &rv);

	Fixed &operator=(const Fixed &other);
	Fixed operator+(const Fixed &rraw_bits) const; 
	Fixed operator-(const Fixed &rraw_bits) const;
	Fixed operator*(const Fixed &rraw_bits) const;
	Fixed operator/(const Fixed &rraw_bits) const; 
	bool operator<(const Fixed &rraw_bits) const;
	bool operator>(const Fixed &rraw_bits) const;
	bool operator<=(const Fixed &rraw_bits) const;
	bool operator>=(const Fixed &rraw_bits) const;
	bool operator==(const Fixed &rraw_bits) const;
	bool operator!=(const Fixed &rraw_bits) const;
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
};

std::ostream &operator<<(std::ostream &os, Fixed const &other);

#endif
