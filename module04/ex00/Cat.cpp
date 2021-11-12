#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
}

Cat::~Cat()
{
	
}
Cat::Cat(const Cat &other)
{
	*this = other;
}
Cat &Cat::operator=(const Cat &other)
{
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
