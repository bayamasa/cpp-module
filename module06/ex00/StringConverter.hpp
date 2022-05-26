#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <limits>

enum Type {
	Default,
	Char,
	Int,
	Float,
	Double,
	Impossible
};

class StringConverter
{
private:
	std::string _org;
	Type _type;
	char _c_value;
	int _i_value;
	float _f_value;
	double _d_value;
	bool is_int_error;
	bool is_float_error;
	bool is_double_error;
	std::string charStr;
	std::string intStr;
	std::string floatStr;
	std::string doubleStr;
	bool isChar();
	bool isInt();
	bool isFloat();
	bool isDouble();
	bool isPseudoWithSuffix(std::string str);
	bool isPseudoNoSuffix(std::string str);
	void setValuesFromChar();
	void setValuesFromInt();
	void setValuesFromFloat();
	void setValuesFromDouble();
	void setValuesFromImpossible();
	void setStringsFromChar();
	void setStringsFromInt();
	void setStringsFromFloat();
	void setStringsFromDouble();
	void setStringsFromImpossible();
	void setStringsFromDefault();
	void setCharStr();
	void setIntStr();
	void setFloatStr();
	void setDoubleStr();
	void convert();
	Type detectType();
	Type getType() const;
	void setType(const Type &type);
	void setOrg(std::string &org);
public:
	StringConverter();
	StringConverter(std::string argv);
	~StringConverter();
	StringConverter(const StringConverter &other);
	void printType();
	void printAllValues();
	void printAllStrings();
	StringConverter &operator=(const StringConverter &other);
};

#endif
