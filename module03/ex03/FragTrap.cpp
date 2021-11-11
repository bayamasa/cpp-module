#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string new_name)
{
	name = new_name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap "<< name << " has been made!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is out of order.."<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	std::cout << "Copy Constructor FragTrap "<< name << " has been made!!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
		std::cout << "Assigned Operator FragTrap "<< name << " has been made!!" << std::endl;
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
