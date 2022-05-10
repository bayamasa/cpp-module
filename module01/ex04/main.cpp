/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:44:07 by mhirabay          #+#    #+#             */
/*   Updated: 2022/05/10 17:12:22 by mhirabay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
	std::string filename;
	std::string orig;
	std::string repl;

	if (argc != 4)
	{
		std::cout << "Invalid argument" << std::endl;
		std::cout << "ref input type: <filename> <replace target> <replace result>" << std::endl;
		return 0;
	}

	filename = argv[1];
	orig = argv[2];
	repl = argv[3];

	if (orig.length() == 0 || repl.length() == 0)
	{
		std::cout << "argv 2 and 3 must not be empty" << std::endl;
		return 0;
	}

	std::ifstream ifs(filename);
	if (ifs.fail())
	{
		std::cout << "Faild to open input file" << std::endl;
		std::exit(1);
	}

	std::ofstream ofs(filename + ".replace");
    if (ofs.fail())
	{
		std::cout << "Failed to open output file" << std::endl;
		std::exit(1);
	}

	std::string line;
	while (std::getline(ifs, line))
	{	
		std::string::size_type pos = 0;
		while ((pos = line.find(orig, pos)) != std::string::npos) {
			line.erase(pos, orig.length()).insert(pos, repl);
			pos += repl.length();
		}
		ofs << line << std::endl;
	}
	
	ifs.close();
	ofs.close();
	return (0);
} 
