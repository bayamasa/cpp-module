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
	std::string org;
	Type type;
	char c;
	int i;
	float f;
	double d;
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
	void setOrg(std::string &org);
	Converter &operator=(const Converter &other);
};

#endif
