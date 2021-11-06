#include "Contact.hpp"

Contact::Contact()
{
}

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
