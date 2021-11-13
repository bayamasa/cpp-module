#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}
MateriaSource::~MateriaSource()
{
}
MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (sourceA == NULL)
	{
		sourceA = materia;
		return;
	}
	if (sourceB == NULL)
	{
		sourceB = materia;
		return;
	}
	if (sourceC == NULL)
	{
		sourceC = materia;
		return;
	}
	if (sourceD == NULL)
	{
		sourceD = materia;
		return;
	}
	std::cout << "short of materia source" << std::endl;
}
