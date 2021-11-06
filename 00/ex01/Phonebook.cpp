#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->amount = 0;
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

	if (this->amount == 8)
	{
		std::cout << "Phonebook is full" << std::endl;
		std::cout << "Substitute contact index: " << index + 1 << std::endl;
		if (index == 8)
			this->index = 0;
		this->contact[index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
		index++;
		return ;
	}
	this->contact[index] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	index++;
	amount++;
	std::cout << "Add Contact in the Phonebook!!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	PhoneBook::searchContact()
{
	size_t maxlen;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	
	maxlen = 10;
	if (this->amount == 0)
	{
		std::cout << "Contact is 0." << std::endl;
		return ;
	}
	
	for (int i = 0; i < this->amount; i++)
	{
		std::cout << "|" << std::setw(maxlen) << i + 1 << "|" << std::endl;
		first_name = this->contact[i].getFirstName();
		if (first_name.length() > maxlen)
			std::cout << "|" << first_name.substr(0, 9) << "." << "|" << std::endl;
		else
			std::cout << "|" << std::setw(maxlen) << first_name << "|" << std::endl;
		
		last_name = this->contact[i].getFirstName();
		if (first_name.length() > maxlen)
			std::cout << "|" << first_name.substr(0, 9) << "." << "|" << std::endl;
		else
			std::cout << "|" << std::setw(maxlen) << first_name << "|" << std::endl;
			last_name = this->contact[i].getFirstName();
		nick_name = this->contact[i].getNickName();
		if (nick_name.length() > maxlen)
			std::cout << "|" << nick_name.substr(0, 9) << "." << "|" << std::endl;
		else
			std::cout << "|" << std::setw(maxlen) << nick_name << "|" << std::endl;
	}
}

