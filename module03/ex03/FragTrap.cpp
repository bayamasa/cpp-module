#include "FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "FragTrap "<< _name << " has been made!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " is out of order.."<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	std::cout << "Copy Constructor FragTrap "<< _name << " has been made!!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
		std::cout << "Assigned Operator FragTrap "<< _name << " has been made!!" << std::endl;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout 
	<< "FragTrap "
	<< _name 
	<< " have requested high fives!!" 
	<< std::endl;
}
