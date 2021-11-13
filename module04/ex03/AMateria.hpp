#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "Character.hpp"

#define ICE "ice"
#define CURE "cure"


class AMateria :public Character, IMateriaSource
{
protected:
	std::string const type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria &operator=(const AMateria &other);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
