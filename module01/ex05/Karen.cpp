#include "Karen.hpp"

Karen::Karen(/* args */)
{
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
	std::cout << "[DEBUG]: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	// enum anger_level { 
	// 	debug = std::string("debug"), 
	// 	info, 
	// 	warn, error};
	// anger_level lv = level;
	std::string str[] = 
	{
		"debug", "info", "warn", "error"
	};

}

// 方針 配列の何番目にあるのかどうかを判定するような機能を探してくる
// enumと文字列を結びつける
