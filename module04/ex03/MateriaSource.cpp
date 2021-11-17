#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < SRC_LIMIT; i++)
	{
		if(src[i] != NULL)
		{
			delete src[i];
		}
	}
}
MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < SRC_LIMIT; i++)
		{
			if(other.src[i] != NULL)
			{
				src[i] = other.src[i];
			}
		}	
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia == NULL)
	{
	}
	for (int i = 0; i < SRC_LIMIT; i++)
	{
		if(src[i] == NULL)
		{
			src[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type.empty())
	{
		return NULL;
	}
	for (int i = 0; i < SRC_LIMIT; i++)
	{
		if(src[i]->getType() == type)
		{
			return src[i];
		}
	}
	return NULL;
}
