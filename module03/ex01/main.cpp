#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


void execClap(ClapTrap &clap)
{
	clap.attack("enemy");
	clap.takeDamage(99999);
	clap.beRepaired(100);
}

void execScav(ScavTrap &scav)
{
	scav.attack("enemy");
	scav.takeDamage(50000000);
	scav.beRepaired(99999);
	scav.guardGate();
}


int main(void)
{
	{
		std::cout << "============ClapTrap=============" << std::endl;
		ClapTrap a = ClapTrap("a");
		ClapTrap b(a);
		ClapTrap c;
		c = b;
		execClap(a);
		execClap(b);
		execClap(c);
	}
	{
		std::cout << "============ScavTrap=============" << std::endl;
		ClapTrap d = ScavTrap("d");
		// ScavTrap e(d);
		// ScavTrap f;
		// f = e;
		// execScav(d);
		// execScav(e);
		// execScav(f);
		std::cout << "=================================" << std::endl;
	}
	return (0);
}
