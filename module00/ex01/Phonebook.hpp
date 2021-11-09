/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:16:40 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/09 21:56:28 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contact contact[MAX_CONTACTS];
	int		amount;
	int		index;
	void printAttr(std::string attr, size_t maxlen);
	void printAllAttr(int index);
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

#endif
