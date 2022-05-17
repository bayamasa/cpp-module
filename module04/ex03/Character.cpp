#include "Character.hpp"

Character::Character()
{
	_name = "default";
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		inventory[i] = NULL;
	}
}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (inventory[i] != NULL)
		{
			delete inventory[i];
		}
	}
}

Character::Character(const Character &other)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		inventory[i] = NULL;
	}
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < INVENTORY_SIZE; i++)
		{
			if (inventory[i] != NULL)
			{
				delete inventory[i];
				inventory[i] = NULL;
			}
			if (other.inventory[i] != NULL)
			{
				inventory[i] = other.inventory[i]->clone();
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
			inventory[i] = m->clone();
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
		delete inventory[idx];
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
