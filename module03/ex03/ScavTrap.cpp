#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string new_name)
{
	name = new_name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap "<< name << " has been made!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " is out of order.."<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	std::cout << "Copy Constructor ScavTrap "<< this->name << " has been made!!" << std::endl;
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
	std::cout << "Assigned Operator ScavTrap "<< this->name << " has been made!!" << std::endl;
	return *this;
}

void	ScavTrap::attack( std::string const &target ) 
{
	std::cout 
	<< "ScavTrap " 
	<< this->name 
	<< " attacks " 
	<< target 
	<< ", causing " 
	<< attack_damage 
	<< " points of damage!" 
	<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout 
	<< "ScavTrap " 
	<< name 
	<< " have enterred in Gate keeper mode" 
	<< std::endl;
}
