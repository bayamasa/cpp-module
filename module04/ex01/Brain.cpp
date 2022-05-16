#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constuctor called: Brain" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = "default";
	}
}

Brain::~Brain()
{
	std::cout << "Destuctor called: Brain" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy Constuctor called: Brain" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Assigned Operator called: Brain" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}
