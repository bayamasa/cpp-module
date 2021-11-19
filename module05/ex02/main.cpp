#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat abe("abe", 40);
		ShrubberyCreationForm form("hi");
		form.beSigned(abe);
		form.execute(abe);

		Bureaucrat suga("suga", 50);
		RobotomyRequestForm form_1("hiaaaaaaaaa");
		form_1.beSigned(abe);
		form_1.execute(abe);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
