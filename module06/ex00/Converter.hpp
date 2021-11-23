#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>

class Converter
{
private:
	std::string argv;
	char _c;
	int _i;
	float _f;
	double _d;
public:
	Converter();
	Converter(char value);
	Converter(int value);
	Converter(float value);
	Converter(double value);
	
	~Converter();
	Converter(const Converter &other);
	void interpret(char const *argv);
	Converter &operator=(const Converter &other);
};

#endif
