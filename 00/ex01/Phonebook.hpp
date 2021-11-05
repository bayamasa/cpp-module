#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include <iostream>
#include <string>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contact contact[MAX_CONTACTS];
	int		amount;
	int		index;
public:
	PhoneBook();
	~PhoneBook();
	void	addContact(
		std::string first_name,
		std::string last_name,
		std::string nickname,
		std::string phone_number,
		std::string darkest_secret
	);
	void	searchContact();
	void	removeContact(std::string name);
	void	printContacts();
};

void PhoneBook::addContact(
		std::string first_name,
		std::string last_name,
		std::string nickname,
		std::string phone_number,
		std::string darkest_secret
	)
{
	if (first_name == "")
	{
		std::cout << "FirstName must be non-blank" << std::endl;
		return ;
	}
	if (last_name == "")
	{
		std::cout << "LastName must be non-blank" << std::endl;
		return ;
	}
	if (nickname == "")
	{
		std::cout << "NickName must be non-blank" << std::endl;
		return ;
	}
	if (phone_number == "")
	{
		std::cout << "PhoneNumber must be non-blank" << std::endl;
		return ;
	}
	if (darkest_secret == "")
	{
		std::cout << "DarkestSecret must be non-blank" << std::endl;
		return ;
	}

	if (this->amount == 7)
	{
		std::cout << "Phonebook is full" << std::endl;
		std::cout << "Delete first contact" << std::endl;
		this->index /= 7;
		this->contact[index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
		index++;
		return ;
	}
	this->contact[index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	index++;
	amount++;
	std::cout << "Add Contact in the Phonebook!!" << std::endl;
	return ;
}

void	PhoneBook::searchContact()
{
	size_t len;
	std::string first_name;
	
	if (this->amount == 0)
	{
		std::cout << "Contact is 0." << std::endl;
		return ;
	}
	
	for (int i = 0; i < this->amount; i++)
	{
		first_name = this->contact[i].getFirstName();
		if (first_name.length() > 10)
		{
			std::substr(first_name)
		}
	}
	
}


#endif
