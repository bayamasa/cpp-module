#include <iostream>
#include <string>


int main(void)
{
	std::string hello = "hello world";
	std::cout << hello << std::endl;
	ssize_t index = hello.find("wor");
	std::cout << hello.erase(index, 3).insert(index, "42 Tokyo") << std::endl;
}
