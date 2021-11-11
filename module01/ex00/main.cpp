/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:08:38 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/11 21:08:39 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::ostringstream oss;
	srand(time(NULL));
	oss << rand();

	Zombie zombie("Hello");
	zombie.announce();

	Zombie *zombie_1 = newZombie("HI");
	zombie_1->announce();
	delete zombie_1;

	randomChump(oss.str());
	return (0);
}

