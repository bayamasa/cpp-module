#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
}

Character::~Character()
{
	std::cout << _name << " has been disappeared..." << std::endl;
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
std::string const&	Character::getName() const
{
	return _name;
}
void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "equip() need materia" << std::endl;
		return ;
	}

	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if(inventory[i] == NULL)
		{
			inventory[i] = m;
			std::cout << "equip " << m->getType() << " materia!" << std::endl;
			return;
		}
	}
	std::cout << "inventory is full. you need unequip materia" << std::endl;
	
}

void Character::unequip(int idx)
{
	if(idx < 0 || idx > 3)
	{
		std::cout 
		<< "unequip() character only has 4 materia. input index must be 0 ~ 3" 
		<< std::endl;
	}
	if(inventory[idx] != NULL)
	{
		inventory[idx] = NULL;
		std::cout << "unequip " << inventory[idx]->getType() << " materia succeeded!" << std::endl;
	}
	std::cout << "There is no materia index " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
	{
		inventory[idx]->use(target);
	}
}
