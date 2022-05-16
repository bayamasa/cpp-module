#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
	type = "Animal";
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = other;
}
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal Assigned Operator called" << std::endl;
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
