#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	try
	{
		Bureaucrat abe("abe", 1);
		Bureaucrat suga("suga", 50);
		std::cout << abe << std::endl;
		std::cout << suga << std::endl;
		// RobotomyRequestForm form_1("hiaaaaaaaaa");
		// form_1.beSigned(abe);
		// form_1.execute(abe);
		rrf->beSigned(suga);
		rrf->execute(abe);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	delete rrf;
	// system("leaks a.out");
	return (0);
}
