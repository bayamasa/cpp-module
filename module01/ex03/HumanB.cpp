#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
	std::cout << this->name << " attack with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &value)
{
	weapon = &value;
}
