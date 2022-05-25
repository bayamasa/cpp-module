#include "Converter.hpp"

Converter::Converter(){}

Converter::Converter(std::string org)
{
	_org = org;
	_c = '\0';
	_i = 0;
	_f = 0;
	_d = 0.0;
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
		_org = other._org;
	}
	return *this;
}
void Converter::printType()
{
	if (_type == Char)
	{
		std::cout << "char" << std::endl;
	}
	if (_type == Int)
	{
		std::cout << "Int" << std::endl;
	}
	if (_type == Float)
	{
		std::cout << "Float" << std::endl;
	}
	if (_type == Double)
	{
		std::cout << "Double" << std::endl;
	}
}

Type Converter::detectType()
{
	if (_org.empty())
		return Impossible;
	else if (isChar())
		return Char;
	else if (isInt())
		return Int;
	else if (isFloat())
		return Float;
	else if (isDouble())
		return Double;
	std::cout << "Impossible reach" << std::endl;	
	return Impossible;
}

bool Converter::isChar()
{
	if (_org.length() != 1)
		return false;
	if (std::isdigit(_org[0]))
		return false;
	if (_org[0] < ' ' && _org[0] > '~')
		return false;
	return true;
}

bool Converter::isInt()
{
	long v;
	char *endptr;
	
	if (_org[0] == ' ')
		return false;
	v = strtol(_org.c_str(), &endptr, 10);
	errno = 0;
	if (*endptr != '\0' || errno == ERANGE)
		return false;
	if (v > std::numeric_limits<int>::max() || v < std::numeric_limits<int>::min())
		return false;
	 return true;
}

bool Converter::isFloat()
{
	float v;
	char *endptr;
	
	if (_org[_org.length() - 1] != 'f')
	{
		return false;
	}
	v = strtof(_org.c_str(), &endptr);
	if (*endptr != 'f' || errno == ERANGE)
	{
		return false;
	}
	if (v > std::numeric_limits<float>::max() || v < -std::numeric_limits<float>::max())
		return false;
	if (v < std::numeric_limits<float>::min() && v > -std::numeric_limits<float>::min())
		return false;
	
	return true;
}

bool Converter::isDouble()
{
	double v;
	char *endptr;
	
	v = strtod(_org.c_str(), &endptr);
	if (*endptr != '\0' || errno == ERANGE)
	{
		std::cout << *endptr << std::endl;
		return false;
	}
		
	if (v > std::numeric_limits<double>::max() || v < -std::numeric_limits<double>::max())
		return false;
	if (v < std::numeric_limits<double>::min() && v > -std::numeric_limits<double>::min())
		return false;
		
	return true;
}

void Converter::setOrg(std::string &org)
{
	_org = org;
}

Type Converter::getType() const
{
	return _type;
}

void Converter::setType(const Type &type)
{
	_type = type;
}



