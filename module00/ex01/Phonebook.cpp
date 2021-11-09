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
	size_t maxlen = 10;
	int index;
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	

	if (this->amount == 0)
	{
		std::cout << "Contact is 0." << std::endl;
		return ;
	}
	std::cout << "|" << "index     "  << std::ends;
	std::cout << "|"  << "first name" << std::ends;
	std::cout << "|"  << "last name " << std::ends;
	std::cout << "|" << "nickname  " << "|" << std::endl;
	
	for (int i = 0; i < this->amount; i++)
	{
		std::cout << "|" << std::setw(maxlen) << i + 1 << std::ends;
		printAttr(this->contact[i].getFirstName(), maxlen);
		printAttr(this->contact[i].getLastName(), maxlen);
		printAttr(this->contact[i].getNickName(), maxlen);
		std::cout << "|" << std::endl;
	}
	std::cout << "Insert search index" << std::endl;
	std::cin >> index;
	// 小数点でcrashしないか見る
	if (std::cin.fail())
	{
		std::cout << "Invalid Argument" << std::endl;
		exit(1);
	}
	if (index > 0 && index <= this->amount)
		printAllAttr(index - 1);
	else
		std::cout << "Input index has no contact." << std::endl;
}

void PhoneBook::printAttr(std::string attr, size_t maxlen)
{
	if (attr.length() > maxlen)
		std::cout << "|" << attr.substr(0, 9) << "." << std::ends;
	else
		std::cout << "|" << std::setw(maxlen) << attr << std::ends;
}

void PhoneBook::printAllAttr(int index)
{
	std::cout << "-----CONTACT_INFO-----" << std::endl;
	std::cout << "first_name: " << this->contact[index].getFirstName() << std::endl;
	std::cout << "last_name: " << this->contact[index].getLastName() << std::endl;
	std::cout << "nick_name: " << this->contact[index].getNickName() << std::endl;
	std::cout << "phone_number: " << this->contact[index].getPhoneNumber() << std::endl;
	std::cout << "darkest_secret: " << this->contact[index].getDarkestSecret() << std::endl;
	std::cout << "----------------------" << std::endl;
}
