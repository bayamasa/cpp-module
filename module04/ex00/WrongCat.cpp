#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Constuctor called: WrongCat" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "Destuctor called: WrongCat" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "Copy Constuctor called: WrongCat" << std::endl;
	*this = other;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Assigned Operator called: WrongCat" << std::endl;
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
