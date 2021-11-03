#ifndef CONTRACT_HPP
#define CONTRACT_HPP

#include <string>

class Contract
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contract();
	Contract(std::string first_name,std::string last_name,
		std::string nick_name, std::string phone_number, std::string darkest_secret)
		: first_name(first_name)
		, last_name(last_name)
		, nick_name(nick_name)
		, phone_number(phone_number)
		, darkest_secret(darkest_secret)
		{}
	std::string getContract(
		
	);
	void		setContract(
		std::string first_name,
		std::string last_name,
		std::string nick_name,
		std::string phone_number,
		std::string darkest_secret
	);
};


Contract::~Contract()
{
}

#endif
