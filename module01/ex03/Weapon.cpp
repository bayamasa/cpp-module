/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:43:00 by mhirabay          #+#    #+#             */
/*   Updated: 2022/05/10 14:28:42 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type)
{
	_type = type;
}

Weapon::~Weapon()
{
	std::cout << _type << " has broken.." << std::endl;
}

const std::string& Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string const &type)
{
	_type = type;
}
