#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP


#include <iostream>
#include <string>
#include "Contract.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contract contract[MAX_CONTACTS];
	int		amount;
public:
	PhoneBook::PhoneBook()
	{
		for (int i = 0; i < MAX_CONTACTS; i++)
		{
			this->contract[i] = (Contract)1;
		}
		
	};
	~PhoneBook();
	void	addContact(
		std::string first_name,
		std::string last_name,
		std::string nickname,
		std::string phone_number,
		std::string darkest_secret
	);
	void	setContract(Contract contract);
	void	searchContact(std::string name);
	void	removeContact(std::string name);
	void	printContacts();
};


void	PhoneBook::setContract(Contract contract)
{
	
}

void PhoneBook::addContact(
		std::string first_name,
		std::string last_name,
		std::string nickname,
		std::string phone_number,
		std::string darkest_secret
	)
{
	if (this->contract == NULL)
	{
		
	}
	std::cout << "Phonebook is full" << std::endl;
}

#endif
