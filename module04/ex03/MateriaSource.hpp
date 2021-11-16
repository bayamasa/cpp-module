#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

# define SRC_LIMIT 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria *src[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
};

#endif

