#include "Zombie.hpp"

int main(void)
{
	std::ostringstream oss;
	oss << rand();

	srand(time(NULL));

	
	Zombie zombie("Hello");
	zombie.announce();
	randomChump(oss.str());
	Zombie *zombie_1 = newZombie("HI");
	zombie_1->announce();
	delete zombie_1;

	return (0);
}

