/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:49:03 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/09 21:34:47 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome_phonebook.hpp"


std::string createInput(std::string target)
{
	std::string res;
	while (1)
	{
		std::cout << "Input " << target << ": " << std::ends;
		std::getline(std::cin, res);
		if (std::cin.fail())
		{
			std::cout << std::endl;
			std::cout << target << " is Invalid argument" << std::endl;
			std::exit(1);
		}
		if(res == "")
		{
			std::cout << "Forbidden only blank." << std::endl;
			continue;
		}
		return res;
	}
}

void execAdd(PhoneBook &phoneBook)
{
	phoneBook.addContact(	
							createInput("first_name"), 
							createInput("last_name"), 
							createInput("nick_name"),
							createInput("phone_number"),
							createInput("darkest_secret")
						);
}

void execSearch(PhoneBook &phoneBook)
{
	phoneBook.searchContact();
}

void execExit()
{
	std::cout << "Exit confirmed" << std::endl;
	std::cout << "Delete all Contacts. Process termineted..." << std::endl;
	std::exit(0);
}

int main(void)
{
	std::string input;
	PhoneBook phonebook;
	std::cout << "Welcome to My Awesome Phonebook!!" << std::endl;
	while (1)
	{	
		std::cout << "Options ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, input);
		
		if (std::cin.fail())
		{
			std::cout << "Invalid Argument" << std::endl;
			std::exit(1);
		}
		if(input == "ADD")
			execAdd(phonebook);
		if(input == "SEARCH")
			execSearch(phonebook);
		if (input == "EXIT")
			execExit();
	}
}
