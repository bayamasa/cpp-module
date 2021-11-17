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
		_name = other._name;
		for (int i = 0; i < INVENTORY_SIZE; i++)
		{
			if (other.inventory[i] != NULL)
			{
				inventory[i] = other.inventory[i];
			}
		}
	}
	return *this;
}
std::string const&	Character::getName() const
{
	return _name;
}
void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		return ;
	}

	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if(inventory[i] == NULL)
		{
			inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if(idx < 0 || idx > 3)
	{
		return ;
	}
	if(inventory[idx] != NULL)
	{
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
	{
		inventory[idx]->use(target);
	}
}
