#include <iostream>
#include <sstream>
#include <string>

int main(void)
{
	int a = 1;
	std::stringstream ss;
	
	ss << a << std::flush;
	std::cout << ss.str() << std::endl;
	ss.str("");
	// ss.clear(std::stringstream::goodbit);
	ss << a;
	std::cout << ss.str() << std::endl;
}
