#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource()
{
}
IMateriaSource::~IMateriaSource()
{
}
IMateriaSource::IMateriaSource(const IMateriaSource &other)
{
	*this = other;
}
IMateriaSource &IMateriaSource::operator=(const IMateriaSource &other)
{
	if (this != &other)
	{
	}
	return *this;
}
