/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:32:31 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/11 21:10:08 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <ctime>
#include <sstream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string);
	~Zombie();
	void setName(std::string name);
	void announce();
};

Zombie *zombieHorde(int N, std::string name);

#endif
