#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap "<< _name << " has been made!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " is out of order.."<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	std::cout << "Copy Constructor ScavTrap "<< _name << " has been made!!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	std::cout << "Assigned Operator ScavTrap "<< _name << " has been made!!" << std::endl;
	return *this;
}

void	ScavTrap::attack( std::string const &target )
{
	std::cout 
	<< "ScavTrap " 
	<< _name 
	<< " attacks " 
	<< target 
	<< ", causing " 
	<< _attack_damage 
	<< " points of damage!" 
	<< std::endl;
}

void ScavTrap::guardGate()
{
	std::cout 
	<< "ScavTrap " 
	<< _name 
	<< " have enterred in Gate keeper mode" 
	<< std::endl;
}
