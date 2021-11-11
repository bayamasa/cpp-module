#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: name(name)
	, hit_points(100)
	, energy_points(50)
	, attack_damage(20)
{
	std::cout << "FragTrap "<< name << " has been made!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is out of order.."<< std::endl;
}


FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
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

void FragTrap::highFivesGuys()
{
	std::cout 
	<< "FragTrap " 
	<< name 
	<< " have requested high fives!!" 
	<< std::endl;
}
