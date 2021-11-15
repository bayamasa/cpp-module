#include "ClapTrap.hpp"


// ここを参照にしないと、スタックにobjが確保されてcopy contructorが呼ばれる。
void execClap(ClapTrap &clap)
{
	clap.attack("enemy");
	clap.takeDamage(UINT32_MAX);
	clap.beRepaired(UINT32_MAX);
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
