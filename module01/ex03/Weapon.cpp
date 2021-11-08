#include "Weapon.hpp"

Weapon::Weapon()
{

}


Weapon::Weapon(std::string const &type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
	return this->type;
}

void Weapon::setType(std::string const &type)
{
	this->type = type;
}
