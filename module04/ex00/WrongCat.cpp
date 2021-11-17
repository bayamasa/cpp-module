#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	
}
WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		type = other.getType();
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Gaoh" << std::endl;
}
