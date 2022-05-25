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

class Converter
{
private:
	std::string _org;
	Type type;
	char _c;
	int _i;
	float _f;
	double _d;
	bool isChar();
	bool isInt();
	bool isFloat();
	bool isDouble();
public:
	Converter();
	Converter(std::string argv);
	~Converter();
	Converter(const Converter &other);
	void printType();
	void detectType();
	Type getType() const;
	void setOrg(std::string &org);
	Converter &operator=(const Converter &other);
};

#endif
