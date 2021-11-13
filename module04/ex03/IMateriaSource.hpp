#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
protected:
	static const int materia_limit = 4;
	// 実態を持てないが、配列で持たないと行けないとはこれいかほどに
	// とりあえず4つで持ったけど冗長すぎるから後で直すかも
	AMateria *sourceA;
	AMateria *sourceB;
	AMateria *sourceC;
	AMateria *sourceD;
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
