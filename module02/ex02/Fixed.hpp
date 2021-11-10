#ifndef FIFixedED_HPP
# define FIFixedED_HPP

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
	Fixed operator-(const Fixed &rraw_bits) const {
		return (getRawBits() - rraw_bits.getRawBits());
	}
	Fixed operator*(const Fixed &rraw_bits) const {
		return (getRawBits() * rraw_bits.getRawBits());
	}
	Fixed operator/(const Fixed &rraw_bits) const {
		return (getRawBits() / rraw_bits.getRawBits());
	}
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
		Fixed old = *this;  // increment前の値をコピー
		++(*this);// 自分自身を前置incrementする
		return old;  // increment前の値を返す
	}
};

std::ostream &operator<<(std::ostream &os, Fixed const &other);

#endif
