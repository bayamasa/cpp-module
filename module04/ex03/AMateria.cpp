#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	_type = type;
}
AMateria::~AMateria()
{
}
AMateria::AMateria(const AMateria &other)
{
	*this = other;
}
AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
	}
	return *this;
}
