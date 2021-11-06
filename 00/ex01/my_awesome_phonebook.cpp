/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_awesome_phonebook.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:49:03 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/06 16:15:07 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_awesome_phonebook.hpp"


std::string createInput(std::string target)
{
	std::string res;
	std::cout << "Input " << target << ": " << std::ends;
	std::cin >> res;
	if (std::cin.fail())
	{
		std::cout << std::endl;
		std::cout << target << " is Invalid argument" << std::endl;
		std::exit(0);
	}
	// std::cin.clear();
	// std::clearerr(std::cin);
	return res;
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
	std::cout << "Confirm exit" << std::endl;
	std::cout << "Delete all Phonebook. Thank you." << std::endl;	
}

int main(void)
{
	std::string input;
	int choice;
	PhoneBook phonebook;
	while (1)
	{	
		std::cout << "Welcome to My Awesome Phonebook!!" << std::endl;
		std::cout << "Options 1:ADD, 2:SEARCH, 3:EXIT" << std::endl;
		std::cin >> choice;
		if (std::cin.fail())
		{
			std::cout << "Invalid Argument" << std::endl;
			exit(1);
		}
		switch (choice)
		{
		case ADD:
			execAdd(phonebook);
			break;
		case SEARCH:
			execSearch(phonebook);
			break;
		case EXIT:
			execExit();
			exit(0);
		default:
			std::cout << "Invalid Option. Exit program." << std::endl;
			exit(0);
		}
	}
}
