#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav = ScavTrap("hello");
	scav.attack("enemy");
	scav.takeDamage(10);
	scav.beRepaired(10);
	scav.guardGate();
	return 0;
}
