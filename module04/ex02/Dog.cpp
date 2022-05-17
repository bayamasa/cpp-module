#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Constuctor called: Dog" << std::endl;
	type = "Dog";
	_brain = new Brain();
}
Dog::~Dog()
{
	std::cout << "Destructor called: Dog" << std::endl;
	delete _brain;
}
Dog::Dog(const Dog &other)
{
	std::cout << "Copy Constuctor called: Dog" << std::endl;
	_brain = new Brain();
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Assigned operator called: Dog" << std::endl;
	if (this != &other)
	{
		type = other.getType();
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bow!" << std::endl;
}
