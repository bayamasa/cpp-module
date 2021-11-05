#ifndef CONTRACT_HPP
#define CONTRACT_HPP

#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact();
	Contact(std::string first_name,std::string last_name,
		std::string nick_name, std::string phone_number, std::string darkest_secret)
		: first_name(first_name)
		, last_name(last_name)
		, nick_name(nick_name)
		, phone_number(phone_number)
		, darkest_secret(darkest_secret)
		{}
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
	void		setContact(
		std::string first_name,
		std::string last_name,
		std::string nick_name,
		std::string phone_number,
		std::string darkest_secret
	);
};

Contact::~Contact()
{
}

std::string Contact::getFirstName()
{
	return this->first_name;
}
std::string Contact::getLastName()
{
	return this->last_name;
}
std::string Contact::getNickName()
{
	return this->nick_name;
}
std::string Contact::getPhoneNumber()
{
	return this->phone_number;
}
std::string Contact::getDarkestSecret()
{
	return this->darkest_secret;
}

#endif
