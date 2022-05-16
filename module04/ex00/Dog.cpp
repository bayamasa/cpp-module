#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Assigned Operator called" << std::endl;
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
