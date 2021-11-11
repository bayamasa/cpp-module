/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:16:49 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/11 21:16:50 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string string = "Hi THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "stringPTR's address = " << stringPTR << std::endl;
	std::cout << "stringREF's address = " << &stringREF << std::endl;

	std::cout << "stringPTR's = " << *stringPTR << std::endl;
	std::cout << "stringREF's = " << stringREF << std::endl;

}
