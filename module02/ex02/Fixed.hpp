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

	static Fixed min(Fixed &lv, Fixed const &rv)
	{
		if (lv <= rv)
			return lv;
		return rv;
	}
	static Fixed max(Fixed &lv, Fixed const &rv)
	{
		if (lv >= rv)
			return lv;
		return rv;
	}

	Fixed &operator=(const Fixed &other);
	Fixed operator+(const Fixed &rraw_bits) const; 
	Fixed operator-(const Fixed &rraw_bits) const;
	Fixed operator*(const Fixed &rraw_bits) const;
	Fixed operator/(const Fixed &rraw_bits) const; 
	// headerファイルに処理を書き込まない
	bool operator<(const Fixed& rraw_bits){  
		return raw_bits < rraw_bits.getRawBits();
	}
	bool operator>(const Fixed& rraw_bits) {
		return raw_bits > rraw_bits.getRawBits();
	}
	bool operator<=(const Fixed& rraw_bits) {
		return raw_bits <= rraw_bits.getRawBits();
	}
	bool operator>=(const Fixed& rraw_bits) {
		return raw_bits >= rraw_bits.getRawBits();
	}
	bool operator==(const Fixed& rraw_bits) {
		return raw_bits == rraw_bits.getRawBits();
	}
	bool operator!=(const Fixed& rraw_bits) {
		return raw_bits != rraw_bits.getRawBits();
	}
	Fixed &operator++() {
		raw_bits++;
  		return *this;
	}
	Fixed operator++(int) {
		Fixed old = *this;  
		++(*this);
		return old;
	}
};

std::ostream &operator<<(std::ostream &os, Fixed const &other);

#endif
