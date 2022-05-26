#include "StringConverter.hpp"

StringConverter::StringConverter(){
	_type = Default;
	is_int_error = false;
	is_float_error = false;
	is_double_error = false;
	convert();
}

StringConverter::StringConverter(std::string org)
{
	_org = org;
	_type = Default;
	is_int_error = false;
	is_float_error = false;
	is_double_error = false;
	setType(detectType());
	convert();
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

void StringConverter::printAllValues()
{
	std::cout << "----------------" << std::endl;
	std::cout << "char " << _c_value << std::endl;
	std::cout << "int " << _i_value << std::endl;
	std::cout << "float " << _f_value << std::endl;
	std::cout << "double " << _d_value << std::endl;
	std::cout << "----------------" << std::endl;
}

void StringConverter::printAllStrings()
{
	std::cout << "char: " << charStr << std::endl;
	std::cout << "int: " << intStr << std::endl;
	std::cout << "float: " << floatStr << std::endl;
	std::cout << "double: " << doubleStr << std::endl;
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
	errno = 0;
	v = strtol(_org.c_str(), &endptr, 10);
	if (*endptr != '\0')
		return false;
	if (	*endptr != '\0' ||
			errno == ERANGE ||
			v > std::numeric_limits<int>::max() ||
			v < std::numeric_limits<int>::min()
		)
	{
		is_int_error = true;
		return false;
	}
	 return true;
}

bool StringConverter::isFloat()
{
	float v;
	char *endptr;
	
	if (_org[_org.length() - 1] != 'f')
		return false;
	if (isPseudoWithSuffix(_org))
		return true;
	errno = 0;
	v = strtof(_org.c_str(), &endptr);
	if (*endptr != 'f' || errno == ERANGE)
	{
		is_float_error = true;
		return false;
	}
	if (v > std::numeric_limits<float>::max() || v < -std::numeric_limits<float>::max())
	{
		is_float_error = true;
		return false;
	}
	if (v < std::numeric_limits<float>::min() && v > -std::numeric_limits<float>::min())
	{
		is_float_error = true;
		return false;
	}
	return true;
}

bool StringConverter::isDouble()
{
	double v;
	char *endptr;
	
	if (isPseudoNoSuffix(_org))
		return true;
	errno = 0;
	v = strtod(_org.c_str(), &endptr);
	if (*endptr != '\0' || errno == ERANGE)
	{
		is_double_error = true;
		return false;
	}
	if (v > std::numeric_limits<double>::max() || v < -std::numeric_limits<double>::max())
	{
		is_double_error = true;
		return false;
	}
	if (v < std::numeric_limits<double>::min() && v > -std::numeric_limits<double>::min())
	{
		is_double_error = true;
		return false;
	}
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

void StringConverter::setValuesFromChar()
{
	_c_value = _org[0];
	_i_value = static_cast<int>(_c_value);
	_f_value = static_cast<float>(_c_value);
	_d_value = static_cast<double>(_c_value);
}

void StringConverter::setValuesFromInt()
{
	_i_value = static_cast<int>(strtol(_org.c_str(), NULL, 10));
	_c_value = static_cast<char>(_i_value);
	_f_value = static_cast<float>(_i_value);
	_d_value = static_cast<double>(_i_value);
}

void StringConverter::setValuesFromFloat()
{
	_f_value = strtof(_org.c_str(), NULL);
	_c_value = static_cast<char>(_f_value);
	_i_value = static_cast<int>(_f_value);
	_d_value = static_cast<double>(_f_value);
}

void StringConverter::setValuesFromDouble()
{
	_d_value = strtod(_org.c_str(), NULL);
	_c_value = static_cast<char>(_d_value);
	_i_value = static_cast<int>(_d_value);
	_f_value = static_cast<float>(_d_value);
}

void StringConverter::setValuesFromImpossible()
{
	_c_value = 0;
	_i_value = 0;
	_f_value = 0;
	_d_value = 0;
}

void StringConverter::setStringsFromImpossible()
{
	charStr = "impossible";
	intStr = "impossible";
	floatStr = "impossible";
	doubleStr = "impossible";
}

void StringConverter::setStringsFromDefault()
{
	charStr = "default";
	intStr = "default";
	floatStr = "default";
	doubleStr = "default";
}

void StringConverter::convert()
{
	if (_type == Default)
	{
		setStringsFromDefault();
		return;
	}
	if (_type == Char)
	{
		setValuesFromChar();
		setStringsFromChar();
	}
	else if (_type == Int)
	{
		setValuesFromInt();
		setStringsFromInt();
	}
	else if (_type == Float)
	{
		setValuesFromFloat();
		setStringsFromFloat();
	}
	else if (_type == Double)
	{
		setValuesFromDouble();
		setStringsFromDouble();
	}
	else if (_type == Impossible)
	{
		setValuesFromImpossible();
		setStringsFromImpossible();
	}
	else
	{
		setValuesFromImpossible();
		setStringsFromImpossible();
	}
}

void StringConverter::setStringsFromChar()
{
	charStr = "\'" + _org + "\'";
	intStr = "impossible";
	floatStr = "impossible";
	doubleStr = "impossible";
}

void StringConverter::setStringsFromInt()
{
	setIntStr();
	setCharStr();
	setFloatStr();
	setDoubleStr();
}

void StringConverter::setStringsFromDouble()
{
	setDoubleStr();
	if (isPseudoNoSuffix(doubleStr))
	{
		charStr = "impossible";
		intStr = "impossible";
	}
	else
	{
		setCharStr();
		setIntStr();
	}
	setFloatStr();
}

void StringConverter::setStringsFromFloat()
{
	setFloatStr();
	if (isPseudoWithSuffix(floatStr))
	{
		charStr = "impossible";
		intStr = "impossible";
	}
	else
	{
		setCharStr();
		setIntStr();
	}
	setDoubleStr();
}

void StringConverter::setCharStr()
{
	if ((_d_value >= 0 && _d_value <= 31) || _d_value == 127)
		charStr = "Non displayable";
	else if (std::isprint(_d_value))
	{
		std::ostringstream charOs;
		charOs << "\'" << _c_value << "\'" << std::flush;
		charStr = charOs.str();
	}
	else
		charStr = "impossible";	
}

void StringConverter::setIntStr()
{
	if (is_int_error)
	{
		intStr = "impossible";
		return;
	}
	std::ostringstream intOs;
	intOs << _i_value;
	intStr = intOs.str();
}


void StringConverter::setFloatStr()
{
	if (is_float_error)
	{
		floatStr = "impossible";
		return;
	}
	std::ostringstream floatOs;
	floatOs << _f_value;
	if (getType() == Int && (_f_value <= 1000000 && _f_value >= -1000000))
		floatOs << ".0f" << std::flush;
	else
		floatOs << "f" << std::flush;
	floatStr = floatOs.str();
}

void StringConverter::setDoubleStr()
{
	if (is_double_error)
	{
		doubleStr = "impossible";
		return;
	}
	std::ostringstream doubleOs;
	doubleOs << _d_value;
	if (getType() == Int && (_f_value <= 1000000 && _f_value >= -1000000))
	{
		doubleOs << ".0" << std::flush;
	}
	doubleStr = doubleOs.str();
}

bool StringConverter::isPseudoWithSuffix(std::string str)
{
	if (str == "inff" || str == "-inff" || str == "+inff"
		|| str == "nanf" || str == "+nanf" || str == "-nanf")
		return true;
	return false;
}

bool StringConverter::isPseudoNoSuffix(std::string str)
{
	if (str == "inf" || str == "-inf" || str == "+inf"
		|| str == "nan" || str == "+nan" || str == "-nan")
		return true;
	return false;
}

