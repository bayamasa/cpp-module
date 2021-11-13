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

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	raw_bits = obj.getRawBits();
}

int Fixed::getRawBits(void) const
{
	return raw_bits;
}

void Fixed::setRawBits(int const raw)
{
	raw_bits = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		setRawBits(other.getRawBits());
	}
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::toInt() const
{
	return (raw_bits >> fraction_bits);
}

float Fixed::toFloat() const
{
	return (float)raw_bits / (1 << fraction_bits);
}
