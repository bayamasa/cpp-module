#include "Converter.hpp"

Converter::Converter(){}

Converter::Converter(std::string org)
{
	org = org;
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
		org = other.org;
	}
	return *this;
}
void Converter::printType()
{
	if (type == Char)
	{
		std::cout << "char" << std::endl;
	}
	if (type == Int)
	{
		std::cout << "Int" << std::endl;
	}
	if (type == Float)
	{
		std::cout << "Float" << std::endl;
	}
	if (type == Double)
	{
		std::cout << "Double" << std::endl;
	}
}

void Converter::detectType()
{
	if (org.empty())
	{
		type = Impossible;
		return;
	}
	else if (isChar())
	{
		type = Char;
		return;
	}
	else if (isInt())
	{
		type = Int;
		return;
	}
	else if (isFloat())
	{
		type = Float;
		return;
	}
	else if (isDouble())
	{
		type = Double;
		return;
	}
	std::cout << "Impossible reach" << std::endl;	
}

bool Converter::isChar()
{
	if (org.length() != 1)
		return false;
	if (std::isdigit(org[0]))
		return false;
	if (org[0] < ' ' && org[0] > '~')
		return false;
	return true;
}

bool Converter::isInt()
{
	long v;
	char *endptr;
	
	if (org[0] == '+' || org[0] == ' ')
		return false;
	v = strtol(org.c_str(), &endptr, 10);
	errno = 0;
	if (endptr != NULL || errno == ERANGE)
		return false;
	if (v > std::numeric_limits<int>::max() || v < std::numeric_limits<int>::min())
		return false;
	 return true;
}

bool Converter::isFloat()
{
	float v;
	char *endptr;
	
	if (org[org.length() - 1] != 'f')
		return false;
	v = strtof(org.c_str(), &endptr);
	if (endptr != NULL || errno == ERANGE)
		return false;
	if (v > std::numeric_limits<float>::max() || v < std::numeric_limits<float>::min())
		return false;
	return true;
}

bool Converter::isDouble()
{
	float v;
	char *endptr;
	
	v = strtod(org.c_str(), &endptr);
	if (endptr != NULL || errno == ERANGE)
		return false;
	if (v > std::numeric_limits<double>::max() || v < std::numeric_limits<double>::min())
		return false;
	return true;
}

void Converter::setOrg(std::string &org)
{
	org = org;
}




