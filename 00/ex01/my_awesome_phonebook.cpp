/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:49:03 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/05 17:23:57 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome_phonebook.hpp"

void execAdd(PhoneBook phoneBook)
{
	std::string first_name, last_name, nick_name, phone_number, darkest_secret;
	std::cout << "Input first_name:" << std::endl;
	std::cin >> first_name;
	std::cout << "Input last_name:" << std::endl;
	std::cin >> last_name;
	std::cout << "Input nick_name:" << std::endl;
	std::cin >> nick_name;
	std::cout << "Input phone_number:" << std::endl;
	std::cin >> phone_number;
	std::cout << "Input darkest_secret:" << std::endl;
	std::cin >> darkest_secret;
	phoneBook.addContact(first_name, last_name, nick_name, phone_number, darkest_secret);	
}

void execSearch(PhoneBook phoneBook)
{
	phoneBook.searchContact();
}

int main(void)
{
	int choice;
	PhoneBook phonebook;
	std::cin >> choice;
	std::cout << "Welcome to My Awesome Phonebook!!" << std::endl;
	std::cout << "Options 1:ADD, 2:SEARCH, 3:EXIT" << std::endl;
	switch (choice)
	{
	case ADD:
		execAdd(phonebook);
		break;
	case SEARCH:
		execSearch(phonebook);
		break;	
	default:
		break;
	}
}
