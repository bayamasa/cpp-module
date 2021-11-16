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
		// std::cout << "need input something" << std::endl;
	}
	for (int i = 0; i < SRC_LIMIT; i++)
	{
		if(src[i] == NULL)
		{
			src[i] = materia;
			// std::cout << "learn materia source " << materia->getType() << "!" << std::endl;
			return;
		}
	}
	// std::cout << "short of materia source" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	// std::cout << "try to create materia" << std::endl;
	if (type.empty())
	{
		// std::cout << "need input something" << std::endl;
		return NULL;
	}
	for (int i = 0; i < SRC_LIMIT; i++)
	{
		if(src[i]->getType() == type)
		{
			// std::cout << "found in learned materia" << std::endl;
			// std::cout << "creating " << type << " materia into the sources ..." << std::endl;
			return src[i];
		}
			
	}
	// std::cout << "There is no type in sources" << std::endl;
	return NULL;
}
