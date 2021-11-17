#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(){}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
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
