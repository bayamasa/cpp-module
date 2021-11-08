#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string const &type);
	~Weapon();
	const std::string& getType();
	void setType(std::string const &type);
};

#endif
