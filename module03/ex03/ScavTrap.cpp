#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: name(name)
	, hit_points(100)
	, energy_points(50)
{
	std::cout << "ScavTrap "<< name << " has been made!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is out of order.."<< std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::guardGate()
{
	std::cout 
	<< "ScavTrap " 
	<< name 
	<< " have enterred in Gate keeper mode" 
	<< std::endl;
}
