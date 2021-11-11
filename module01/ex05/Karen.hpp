/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:00:05 by mhirabay          #+#    #+#             */
/*   Updated: 2021/11/11 22:00:06 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	typedef void (Karen::*action)(void);
public:
	Karen();
	~Karen();
	void (* funcPtr)();

	void complain(std::string level);
};

#endif
