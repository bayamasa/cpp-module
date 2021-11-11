#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap
{
private:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
public:
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
};

#endif
