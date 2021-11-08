/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:32:31 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/08 15:32:44 by mhirabay         ###   ########.fr       */
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
	Zombie();
	Zombie(std::string);
	~Zombie();
	void setName(std::string name);
	void announce();
};

Zombie *zombieHorde(int N, std::string name);
