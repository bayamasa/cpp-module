/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:32:31 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/08 09:50:23 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <sstream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string);
	~Zombie();
	void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
