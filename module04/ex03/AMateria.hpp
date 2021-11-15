#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
class AMateria;
#include "ICharacter.hpp"

#define ICE "ice"
#define CURE "cure"


class AMateria
{
protected:
	std::string  _type;
public:
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria &other);
	AMateria &operator=(const AMateria &other);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
