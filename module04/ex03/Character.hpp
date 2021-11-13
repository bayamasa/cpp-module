#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
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
