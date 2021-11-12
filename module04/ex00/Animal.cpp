#include "Animal.hpp"

Animal::Animal(){}

Animal::~Animal(){}

Animal::Animal(const Animal &other)
{
	*this = other;
}
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type = other.getType();
	}
	return *this;
}

std::string const & Animal::getType() const
{
	return type;
}



void Animal::makeSound() const
{
	std::cout << "Strange sound... ???" << std::endl;
}
