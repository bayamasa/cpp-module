#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constuctor called: Animal" << std::endl;

}

Animal::~Animal()
{
	std::cout << "Destuctor called: Animal" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy Constuctor called: Animal" << std::endl;
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
