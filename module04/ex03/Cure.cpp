#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
}
Cure::~Cure()
{
}
Cure::Cure(const Cure &other)
{
	*this = other;
}
Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout 
	<< "* heals "
	<< target.getName()
	<< "'s wounds *"
	<< std::endl;
}
