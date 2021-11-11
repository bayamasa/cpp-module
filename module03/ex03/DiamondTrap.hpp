#ifndef DiamondTRAP_HPP
# define DiamondTRAP_HPP

#include "ClapTrap.hpp"

class DiamondTrap : public ClapTrap
{
private:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	void highFivesGuys(void);
};

#endif
