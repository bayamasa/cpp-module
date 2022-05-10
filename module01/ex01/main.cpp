/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:08:58 by mhirabay          #+#    #+#             */
/*   Updated: 2022/05/10 09:58:54 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 10;

	Zombie *horde = zombieHorde(N, "Hi");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete []horde;
	// system("leaks a.out");
	return (0);
}

