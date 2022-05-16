#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constuctor called: WrongAnimal" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destuctor called: WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "Copy Constuctor called: WrongAnimal" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Assigned Operator called: WrongAnimal" << std::endl;
	if (this != &other)
	{
		type = other.getType();
	}
	return *this;
}

std::string const & WrongAnimal::getType() const
{
	return type;
}


void WrongAnimal::makeSound() const
{
	std::cout << "Strange Wrong sound... ???" << std::endl;
}
