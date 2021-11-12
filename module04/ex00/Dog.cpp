#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
}
Dog::~Dog()
{
}
Dog::Dog(const Dog &other)
{
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
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
