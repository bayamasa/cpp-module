#include <iostream>
#include "StringConverter.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Invalid argument" << std::endl;
		exit(1);
	}
	try {
	std::cout << argv[1] << std::endl;
	StringConverter con(argv[1]);
	con.printAllStrings();
	} catch (std::exception const &e) {
		std::cout << e.what() << std::endl;
	}	
	return 0;
}
