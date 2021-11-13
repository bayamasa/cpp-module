#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
}

Character::~Character()
{
}
Character::Character(const Character &other)
{
	*this = other;
}
Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
	}
	return *this;
}
