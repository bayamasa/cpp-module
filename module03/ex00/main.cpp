#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("a");
	ClapTrap b(a);
	ClapTrap c;
	c = b;
	a.attack("enemy");
	a.takeDamage(100);
	a.beRepaired(80);

	b.attack("enemy");
	b.takeDamage(100);
	b.beRepaired(80);

	c.attack("enemy");
	c.takeDamage(100);
	c.beRepaired(80);

	return (0);
}
