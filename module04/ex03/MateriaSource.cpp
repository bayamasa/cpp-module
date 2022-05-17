#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "materia constructor" << std::endl;
	for (int i = 0; i < SRC_LIMIT; i++)
	{
		src[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "materia source destructor" << std::endl;
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
	std::cout << "materia cp constructor" << std::endl;
	for (int i = 0; i < SRC_LIMIT; i++)
	{
		src[i] = NULL;
	}
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "materia assigned operator" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < SRC_LIMIT; i++)
		{
			if(other.src[i] != NULL)
			{
				if (src[i] != NULL)
				{
					delete src[i];
					src[i] = NULL;
				}
				src[i] = other.src[i]->clone();
			}
		}	
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia == NULL)
	{
		return;
	}
	for (int i = 0; i < SRC_LIMIT; i++)
	{
		if(src[i] == NULL)
		{
			src[i] = materia->clone();
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
		if (src[i] == NULL)
		{
			continue;
		}
		if(src[i]->getType() == type)
		{
			return src[i]->clone();
		}
	}
	return NULL;
}
