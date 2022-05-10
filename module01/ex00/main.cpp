/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:08:38 by mhirabay          #+#    #+#             */
/*   Updated: 2022/05/10 14:42:49 by mhirabay         ###   ########.fr       */
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
	return (0);
}

