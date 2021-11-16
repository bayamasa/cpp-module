#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "created Cure materia instance" << std::endl;
	_type = "cure";
}
Cure::~Cure()
{
	std::cout << "materia cure has been deleted" << std::endl;
}
Cure::Cure(const Cure &other)
{
	*this = other;
}
Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
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
	<< "heals "
	<< target.getName()
	<< "'s wounds *"
	<< std::endl;
}
