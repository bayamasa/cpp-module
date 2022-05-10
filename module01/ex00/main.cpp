/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:08:38 by mhirabay          #+#    #+#             */
/*   Updated: 2022/05/10 09:49:04 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Hello");
	zombie.announce();

	Zombie *zombie_1 = newZombie("HI");
	zombie_1->announce();
	
	randomChump("Hey");
	delete zombie_1;
	// system("leaks a.out");
	return (0);
}

