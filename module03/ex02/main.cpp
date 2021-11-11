#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

void execFrag(FragTrap &trap)
{
	trap.attack("enemy");
	trap.takeDamage(100);
	trap.beRepaired(80);
	trap.highFivesGuys();
}

int main(void)
{
	std::cout << "============ClapTrap=============" << std::endl;
	ClapTrap a = ClapTrap("a");
	ClapTrap b(a);
	ClapTrap c;
	c = b;
	execClap(a);
	execClap(b);
	execClap(c);

	std::cout << "============ScavTrap=============" << std::endl;
	ScavTrap d = ScavTrap("d");
	ScavTrap e(d);
	ScavTrap f;
	f = e;
	execScav(d);
	execScav(e);
	execScav(f);

	std::cout << "============FragTrap=============" << std::endl;
	FragTrap g = FragTrap("d");
	FragTrap h(g);
	FragTrap k;
	k = h;

	execFrag(g);
	execFrag(h);
	execFrag(k);
	std::cout << "=================================" << std::endl;

	return (0);
}
