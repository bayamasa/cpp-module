#include "Data.hpp"

Data::Data()
{
	_a = 100;
	_s = "default";
}
Data::~Data()
{
}

Data::Data(const Data &other)
{
	*this = other;
}
Data &Data::operator=(const Data &other)
{
	if (this != &other)
	{
		_a = other._a;
		_s = other._s;
	}
	return *this;
}

int Data::getA() const
{
	return _a;
}

std::string Data::getS() const
{
	return _s;
}

void Data::setA(int a)
{
	_a = a;
}

void Data::setS(std::string s)
{
	_s = s;
}

