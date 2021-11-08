#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->name << " attack with his " << weapon->getType() << std::endl;
}
