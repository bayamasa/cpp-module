#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Constuctor called: Brain" << std::endl;
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
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

