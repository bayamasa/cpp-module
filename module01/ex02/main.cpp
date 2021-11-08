#include <string>
#include <iostream>

int main(void)
{
	std::string string = "Hi THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "stringPTR's address = " << stringPTR << std::endl;
	std::cout << "stringREF's address = " << &stringREF << std::endl;

	std::cout << "stringPTR's = " << *stringPTR << std::endl;
	std::cout << "stringREF's = " << stringREF << std::endl;

}
