#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string new_name) 
{
	_name = new_name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << "Claptrap " << _name << " has been made!!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << _name << " is out of order.."<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	std::cout << "Copy Constructor ClapTrap "<< _name << " has been made!!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{

	if (this != &other)
	{
		_name = other._name;
		_hit_points = other._hit_points;
		_energy_points = other._energy_points;
		_attack_damage = other._attack_damage;
	}
	std::cout << "Assigned Operator ClapTrap "<< _name << " has been made!!" << std::endl;

	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout 
	<< "CrapTrap " 
	<< _name 
	<< " attacks " 
	<< target 
	<< ", causing " 
	<< _attack_damage 
	<< " points of damage!" 
	<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points == 0)
		std::cout 
		<< "ClapTrap" 
		<< _name 
		<< "is already clashed"
		<< std::endl;
	else if (_hit_points <= amount)
	{
		std::cout 
		<< "ClapTrap" 
		<< _name 
		<< "has been clashed"
		<< std::endl;
		_hit_points = 0;
	}
	else
	{
		std::cout 
		<< "CrapTrap " 
		<< _name 
		<< " takes " 
		<< amount
		<< " damage!" 
		<< std::endl;
		_hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == UINT32_MAX)
		std::cout 
		<< "ClapTrap "
		<< _name
		<< "is already fully hp"
		<< std::endl;
	else if (_hit_points >= UINT32_MAX - amount)
	{
		std::cout 
		<< "ClapTrap "
		<< _name
		<< "takes repaired. Now "
		<< _name
		<< "'s hit points is "
		<< UINT32_MAX
		<< " !" 
		<< std::endl;
		_hit_points = UINT32_MAX;
	}
	else
	{
		std::cout 
		<< "CrapTrap " 
		<< _name 
		<< " takes repaired. Now " 
		<< _name
		<< "'s hit points is "
		<< _hit_points + amount
		<< " !" 
		<< std::endl;
		_hit_points += amount;
	}
}

