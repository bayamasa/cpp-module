#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("a");
	ClapTrap b(a);
	ClapTrap c;
	c = b;
	a.attack("enemy");
	a.takeDamage(99999);
	a.beRepaired(100);

	b.attack("enemy");
	b.takeDamage(99999);
	b.beRepaired(100);

	c.attack("enemy");
	c.takeDamage(99999);
	c.beRepaired(100);

	ScavTrap d("d");
	ScavTrap e(d);
	ScavTrap f;
	f = e;

	d.attack("enemy");
	d.takeDamage(100);
	d.beRepaired(100);
	d.guardGate();

	e.attack("enemy");
	e.takeDamage(99999);
	e.beRepaired(100);
	e.guardGate();

	f.attack("enemy");
	f.takeDamage(99999);
	f.beRepaired(100);
	f.guardGate();
	return (0);
}
