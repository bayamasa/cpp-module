/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:08:58 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/11 21:08:59 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 10;
	std::ostringstream oss;
	srand(time(NULL));
	oss << rand();


	Zombie *horde = zombieHorde(N, oss.str());
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete []horde;
	return (0);
}

