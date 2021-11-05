#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string hello;
	hello = "hello world";

	std::cout << hello.substr(0, 9) << "." << std::endl;
}
