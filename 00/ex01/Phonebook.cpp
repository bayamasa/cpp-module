#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
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
	size_t output_maxlen;
	std::string first_name;
	
	output_maxlen = 10;

	if (this->amount == 0)
	{
		std::cout << "Contact is 0." << std::endl;
		return ;
	}
	
	for (int i = 0; i < this->amount; i++)
	{
		first_name = this->contact[i].getFirstName();
		if (first_name.length() > output_maxlen)
		{
			std::cout << "|" << first_name.substr(0, 9) << "." << "|" << std::endl;
		}
		std::cout << std::setw(12) << std::setfill(' ')<< "|" << first_name << "|" << std::endl;
	}
}

