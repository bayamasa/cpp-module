#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constuctor called: Dog" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Destructor called: Dog" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Copy Constuctor called: Dog" << std::endl;
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Assigned Operator called: Dog" << std::endl;
	if (this != &other)
	{
		type = other.getType();
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bow!" << std::endl;
}
