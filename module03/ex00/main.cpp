#include "ClapTrap.hpp"


// ここを参照にしないと、スタックにobjが確保されてcopy contructorが呼ばれる。
void execClap(ClapTrap &clap)
{
	clap.attack("enemy");
	clap.takeDamage(99999);
	clap.beRepaired(100);
}


int main(void)
{
	// Claptrap a has been made!!
	ClapTrap a = ClapTrap("a");
	// Copy Constructor ClapTrap a has been made!!
	ClapTrap b(a);
	ClapTrap c;
	// Assigned Operator ClapTrap a has been made!!
	c = b;


	execClap(a);
	execClap(b);
	execClap(c);

	return (0);
}
