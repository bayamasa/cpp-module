#include "Converter.hpp"

Converter::Converter(char c)
{
	_c = c;
	_i = static_cast<int>(c);
	_f = static_cast<float>(c);
	_d = static_cast<double>(c);
}



Converter::~Converter()
{
}
Converter::Converter(const Converter &other)
{
	*this = other;
}
Converter &Converter::operator=(const Converter &other)
{
	if (this != &other)
	{
	}
	return *this;
}




