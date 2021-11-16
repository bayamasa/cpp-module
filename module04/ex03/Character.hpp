#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

#define INVENTORY_SIZE 4
class Character : public ICharacter
{
private:
	std::string _name;
	AMateria* inventory[INVENTORY_SIZE];
public:
	Character();
	Character(std::string name);
	~Character();
	Character(const Character &other);
	Character &operator=(const Character &other);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
