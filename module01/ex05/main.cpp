#include "Karen.hpp"

int main(void)
{
	Karen aunt;
	aunt.complain(std::string("debug"));
	
	aunt.complain(std::string("info"));
	
	aunt.complain(std::string("warning"));

	aunt.complain(std::string("error"));
	return 0;
}
