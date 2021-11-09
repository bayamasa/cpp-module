/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:03:58 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/09 20:03:59 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

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
