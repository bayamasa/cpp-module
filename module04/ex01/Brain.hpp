#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	const std::string &getIdeas(int index) const;
	void setIdeas(std::string &idea);
};

#endif
