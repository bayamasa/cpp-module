#include <iostream>
#include "Converter.hpp"

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
	con.setType(con.detectType());
	con.printType();
	return 0;
}
