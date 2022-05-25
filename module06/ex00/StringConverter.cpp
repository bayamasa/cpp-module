#include "StringConverter.hpp"

StringConverter::StringConverter(){}

StringConverter::StringConverter(std::string org)
{
	_org = org;
	setType(detectType());
	convert();
	_c = '\0';
	_i = 0;
	_f = 0;
	_d = 0.0;
}

StringConverter::~StringConverter()
{
}

StringConverter::StringConverter(const StringConverter &other)
{
	*this = other;
}

StringConverter &StringConverter::operator=(const StringConverter &other)
{
	if (this != &other)
	{
		_org = other._org;
	}
	return *this;
}


void StringConverter::printType()
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

Type StringConverter::detectType()
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

bool StringConverter::isChar()
{
	if (_org.length() != 1)
		return false;
	if (std::isdigit(_org[0]))
		return false;
	if (_org[0] < ' ' && _org[0] > '~')
		return false;
	return true;
}

bool StringConverter::isInt()
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

bool StringConverter::isFloat()
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

bool StringConverter::isDouble()
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

void StringConverter::setOrg(std::string &org)
{
	_org = org;
}

Type StringConverter::getType() const
{
	return _type;
}

void StringConverter::setType(const Type &type)
{
	_type = type;
}



