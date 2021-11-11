#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap = ClapTrap("hero");
	clap.attack("enemy");
	clap.takeDamage(10);
	clap.beRepaired(10);
	return 0;	
}
