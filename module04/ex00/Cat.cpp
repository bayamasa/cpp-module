#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constuctor called: Cat" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Destructor called: Cat" << std::endl;
}
Cat::Cat(const Cat &other)
{
	std::cout << "Copy Constuctor called: Cat" << std::endl;
	*this = other;
}
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Assigned Operator called: Cat" << std::endl;
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
