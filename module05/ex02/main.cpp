#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat abe("abe", 50);
		Bureaucrat suga("suga", 100);
		Bureaucrat mhirabay("mhirabay", 150);
		Form goToTrabel("Goto!", 50, 50);
		std::cout << abe << std::endl;
		std::cout << suga << std::endl;
		std::cout << mhirabay << std::endl;
		abe.signForm(goToTrabel);
		std::cout << goToTrabel << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
