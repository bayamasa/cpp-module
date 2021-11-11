#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name) 
	: name(name)
	, hit_points(10)
	, energy_points(10)
	, attack_damage(0)
{
	std::cout << "ClapTrap "<< name << " has been made!!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout <<"ClapTrap " << name << " is out of order.."<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
	}
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

	std::cout << "Energy is " << energy_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout 
	<< "CrapTrap " 
	<< name 
	<< " takes repaired. Now " 
	<< name
	<< "'s hit points is"
	<< hit_points + amount
	<< " !" 
	<< std::endl;
}

