#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is elimineted..." << std::endl;
}

void Zombie::announce(std::string name)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}


void randomChump(std::string name)
{
	
}
