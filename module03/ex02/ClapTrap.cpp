#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string new_name) 
{
	name = new_name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "Claptrap " << name << " has been made!!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << name << " is out of order.."<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	name = other.name;
	hit_points = other.hit_points;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
	std::cout << "Copy Constructor ClapTrap "<< this->name << " has been made!!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{

	if (this != &other)
	{
		name = other.name;
		hit_points = other.hit_points;
		energy_points = other.energy_points;
		attack_damage = other.attack_damage;
	}
	std::cout << "Assigned Operator ClapTrap "<< this->name << " has been made!!" << std::endl;
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout 
	<< "CrapTrap " 
	<< name 
	<< " attacks " 
	<< target 
	<< ", causing " 
	<< attack_damage 
	<< " points of damage!" 
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout 
	<< "CrapTrap " 
	<< name 
	<< " takes " 
	<< amount
	<< " damage!" 
	<< std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout 
	<< "CrapTrap " 
	<< name 
	<< " takes repaired. Now " 
	<< name
	<< "'s hit points is "
	<< amount
	<< " !" 
	<< std::endl;
}

