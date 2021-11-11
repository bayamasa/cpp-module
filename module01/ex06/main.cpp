/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:00:09 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/11 22:24:00 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"


int main(int argc, char const *argv[])
{
	Karen aunt;
	if (argc != 2)
	{
		std::cout << "Invalid argument" << std::endl;
		std::exit(0);
	}
	std::string arg = argv[1];
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if(arg == str[i])
		{
			aunt.complain(i);
			std::exit(0);
		}
	}
	std::cout << "Invalid argument" << std::endl;
	return 0;
}
