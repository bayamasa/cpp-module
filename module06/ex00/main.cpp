#include <iostream>
#include "Converter.hpp"

// bool isdigit(char c)
// {
// 	if (c >= 48 && c <= 57)
// 		return true;
// 	return false;
// }

// bool isChar(std::string str)
// {
// 	if (str.length() == 1 && !isdigit(str[0]))
// 		return true;
// 	return false;
// }

// bool isInt(std::string str)
// {

// }

// void interpret(char const *argv)
// {

// 	std::string str(argv);
// 	std::stringstream iss(str);

// 	// char
// 	if (str.length() == 1 && !isdigit(str[0]))
// 	{
// 		Converter converter(str[0]);
// 	}
// 	// int
// 	if (isInt())
// 	{
		
// 	}
// 	// float
// 	if ()
// 	{
		
// 	}
// 	// double
// 	if ()
// 	{
		
// 	}
// 	if ()
// 	{
		
// 	}
	
	
// }

void detectTypeTest(char *str, Type expect)
{
	Converter con(str);
	con.detectType();
	if (expect == con.getType())
	{
		std::cout << "Test Pass: " << str << std::endl;
	}
	else
		std::cout << "Test Fail: " << str << std::endl;
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid argument" << std::endl;
		exit(1);
	}
	std::cout << argv[1] << ": ";
	Converter con(argv[1]);
	con.detectType();
	con.printType();
	return 0;
}
