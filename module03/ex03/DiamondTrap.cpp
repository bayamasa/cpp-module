#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

DiamondTrap::DiamondTrap(std::string new_name)
{
	name = new_name;
	ClapTrap::name = name + "_clap_name";
	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_damage = 30;
	std::cout << "DiamondTrap "<< name << " has been made!!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " is out of order.."<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	name = other.name;
	ClapTrap::name = other.name + "_clap_name";
	FragTrap::hit_points = other.hit_points;
	ScavTrap::energy_points = other.energy_points;
	FragTrap::attack_damage = other.attack_damage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		ClapTrap::name = other.name + "_clap_name";
		FragTrap::hit_points = other.hit_points;
		ScavTrap::energy_points = other.energy_points;
		FragTrap::attack_damage = other.attack_damage;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name is " << ClapTrap::name << " !" << std::endl;
}

