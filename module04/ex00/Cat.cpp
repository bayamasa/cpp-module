#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}
Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = other;
}
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Assigned Operator called" << std::endl;
	if (this != &other)
	{
		type = other.getType();
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
