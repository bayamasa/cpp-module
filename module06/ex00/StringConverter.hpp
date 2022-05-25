#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>

enum Type {
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
	char _c;
	int _i;
	float _f;
	double _d;
	bool isChar();
	bool isInt();
	bool isFloat();
	bool isDouble();
public:
	StringConverter();
	StringConverter(std::string argv);
	~StringConverter();
	StringConverter(const StringConverter &other);
	void printType();
	Type detectType();
	Type getType() const;
	void setType(const Type &type);
	void setOrg(std::string &org);
	void convert();
	StringConverter &operator=(const StringConverter &other);
};

#endif
