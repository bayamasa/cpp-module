#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string hello;
	hello = "hello world";
	printf("%.3s", hello.c_str());
}
