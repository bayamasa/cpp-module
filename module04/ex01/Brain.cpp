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

const std::string &Brain::getIdeas(int index) const
{
	std::string empty = "";
	if (index < 0 || index > 100)
	{
		std::cout << "idea must be 0 ~ 100" << std::endl;
		throw (std::runtime_error("Error index"));
	}	
	if (!_ideas[index].empty())
	{
		return _ideas[index];
	}
	std::cout << "There is no ideas" << std::endl;
		return _ideas[index];
}

void Brain::setIdeas(std::string &idea)
{
	for (int i = 0; i < 100; i++)
	{
		if(_ideas[i].empty())
		{
			_ideas[i] = idea;
			std::cout << "set idea" << std::endl;
			break;
		}
	}
}
