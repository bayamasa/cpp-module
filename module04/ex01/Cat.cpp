#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Constuctor called: Cat" << std::endl;
	type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Destructor called: Cat" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other)
{
	std::cout << "Copy Constuctor called: Cat" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Assigned operator called: Cat" << std::endl;
	if (this != &other)
	{
		type = other.getType();
		_brain = new Brain(*other._brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
