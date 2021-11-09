/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:04:02 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/09 20:04:03 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
	~Contact();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};

#endif
