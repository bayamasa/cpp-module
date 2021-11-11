#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " is out of order.."<< std::endl;
}

DiamondTrap::DiamondTrap(std::string newName)
{
	std::cout << "DiamondTrap "<< name << " has been made!!" << std::endl;
	name = newName;
	ClapTrap::name += "_clap_name";
	FragTrap::hit_points = 100;
	ScavTrap::energy_points = 50;
	FragTrap::attack_damage = 30;
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
		FragTrap::hit_points = other.FragTrap::hit_points;
		ScavTrap::energy_points = other.ScavTrap::energy_points;
		FragTrap::attack_damage = other.FragTrap::attack_damage;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name is " << ClapTrap::name << " !" << std::endl;
}

