/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:00:09 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/11 22:00:17 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen aunt;
	aunt.complain(std::string("debug"));
	aunt.complain(std::string("info"));
	aunt.complain(std::string("warning"));
	aunt.complain(std::string("error"));
	return 0;
}
