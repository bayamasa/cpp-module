#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "created Ice materia instance" << std::endl;
	_type = "ice";
}
Ice::~Ice()
{
	std::cout << "materia ice has been deleted" << std::endl;
}
Ice::Ice(const Ice &other)
{
	*this = other;
}
Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
	}
	return *this;
}
AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout 
	<< "shoots an ice bolt at"
	<< target.getName()
	<< " *"
	<< std::endl;
}
