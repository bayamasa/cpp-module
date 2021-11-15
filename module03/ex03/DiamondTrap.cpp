#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

DiamondTrap::DiamondTrap(std::string name)
{
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	FragTrap::_hit_points = 100;
	ScavTrap::_energy_points = 50;
	FragTrap::_attack_damage = 30;
	std::cout << "DiamondTrap "<< _name << " has been made!!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " is out of order.."<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	_name = other._name;
	ClapTrap::_name = other._name + "_clap_name";
	FragTrap::_hit_points = other._hit_points;
	ScavTrap::_energy_points = other._energy_points;
	FragTrap::_attack_damage = other._attack_damage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		ClapTrap::_name = other._name + "_clap_name";
		FragTrap::_hit_points = other._hit_points;
		ScavTrap::_energy_points = other._energy_points;
		FragTrap::_attack_damage = other._attack_damage;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name is " << ClapTrap::_name << " !" << std::endl;
}

