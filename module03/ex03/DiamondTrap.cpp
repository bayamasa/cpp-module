#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: name(name)
	, hit_points(100)
	, energy_points(50)
	, attack_damage(20)
{
	std::cout << "DiamondTrap "<< name << " has been made!!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " is out of order.."<< std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	return *this;
}

void DiamondTrap::highFivesGuys()
{
	std::cout 
	<< "DiamondTrap " 
	<< name 
	<< " have requested high fives!!" 
	<< std::endl;
}
