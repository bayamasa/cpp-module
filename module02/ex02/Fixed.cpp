#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	raw_bits = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	raw_bits = i << fraction_bits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	raw_bits = roundf(f * (1 << fraction_bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other) {
		setRawBits(other.getRawBits());
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	return raw_bits;
}

void Fixed::setRawBits(int const raw)
{
	raw_bits = raw;
}

int Fixed::toInt() const
{
	return (raw_bits / (1 << fraction_bits));
}

float Fixed::toFloat() const
{
	return (float)raw_bits / (1 << fraction_bits);
}

Fixed &Fixed::min(Fixed &lv, Fixed &rv)
{
	if (lv <= rv)
		return lv;
	return rv;
}

const Fixed &min(const Fixed &lv, const Fixed &rv)
{
	if (lv <= rv)
		return lv;
	return rv;
}

Fixed &Fixed::max(Fixed &lv, Fixed &rv)
{
	if (lv >= rv)
		return lv;
	return rv;
}

const Fixed &Fixed::max(const Fixed &lv, const Fixed &rv)
{
	if (lv >= rv)
		return lv;
	return rv;
}

Fixed Fixed::operator+(const Fixed &rvalue) const {
	Fixed res;
	res.setRawBits(raw_bits + rvalue.getRawBits());
	return res;
}	

Fixed Fixed::operator-(const Fixed &rvalue) const {
	Fixed res;
	res.setRawBits(raw_bits - rvalue.getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed &rvalue) const {
	long ans = ((long)raw_bits) * (long)rvalue.getRawBits();
	ans >>= fraction_bits;
	Fixed res;
	res.setRawBits((int)ans);
	return res;
}

Fixed Fixed::operator/(const Fixed &rvalue) const {
	if (rvalue.toFloat() == 0)
	{
		std::cout << "Forbidden divided by 0" << std::endl;
		exit(1);
	}
	long ans = ((long)raw_bits << fraction_bits) / (long)rvalue.getRawBits();
	Fixed res;
	res.setRawBits((int)ans);
	return res;
}

bool Fixed::operator<(const Fixed &rraw_bits) const{  
	return raw_bits < rraw_bits.getRawBits();
}

bool Fixed::operator>(const Fixed &rraw_bits) const{
	return raw_bits > rraw_bits.getRawBits();
}

bool Fixed::operator<=(const Fixed &rraw_bits) const{
	return raw_bits <= rraw_bits.getRawBits();
}

bool Fixed::operator>=(const Fixed &rraw_bits) const{
	return raw_bits >= rraw_bits.getRawBits();
}

bool Fixed::operator==(const Fixed &rraw_bits) const{
	return raw_bits == rraw_bits.getRawBits();
}

bool Fixed::operator!=(const Fixed &rraw_bits) const{
	return raw_bits != rraw_bits.getRawBits();
}

Fixed &Fixed::operator++() {
	raw_bits++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old = *this; 
	++(*this);
	return old;
}

Fixed &Fixed::operator--() {
	raw_bits--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old = *this; 
	--(*this);
	return old;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
