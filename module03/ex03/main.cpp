#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


void execClap(ClapTrap &clap)
{
	clap.attack("enemy");
	clap.takeDamage(99999);
	clap.beRepaired(100);
}

void execScav(ScavTrap &scav)
{
	scav.attack("enemy");
	scav.takeDamage(UINT32_MAX);
	scav.beRepaired(UINT32_MAX);
	scav.guardGate();
}

void execFrag(FragTrap &trap)
{
	trap.attack("enemy");
	trap.takeDamage(100);
	trap.beRepaired(80);
	trap.highFivesGuys();
}
void execDiamond(DiamondTrap &trap)
{
	trap.attack("enemy");
	trap.takeDamage(UINT32_MAX);
	trap.beRepaired(UINT32_MAX);
	trap.whoAmI();
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
		ScavTrap d = ScavTrap("d");
		ScavTrap e(d);
		ScavTrap f;
		f = e;
		execScav(d);
		execScav(e);
		execScav(f);
	}
	{
		std::cout << "============FragTrap=============" << std::endl;
		FragTrap g = FragTrap("d");
		FragTrap h(g);
		FragTrap k;
		k = h;

		execFrag(g);
		execFrag(h);
		execFrag(k);
	}
	{
		std::cout << "============DiamondTrap=============" << std::endl;
		DiamondTrap j = DiamondTrap("j");
		DiamondTrap k(j);
		DiamondTrap l;
		l = k;

		execDiamond(j);
		execDiamond(k);
		execDiamond(l);
	}
	std::cout << "=================================" << std::endl;
	return (0);
}
