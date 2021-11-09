#include <iostream>
#include <iomanip>
#include <string>

int main(void)
{
	std::string hello = "hello world";
	// 長い文には埋めなどが対応できるが短くする命令には対応できない。
	std::cout << std::setw(20) << std::setfill('A') << hello << std::endl;
	std::cout.width(3);
	std::cout << hello << std::endl;	
}

