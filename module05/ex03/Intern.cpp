#include "Intern.hpp"

Intern::Intern()
{
}
Intern::~Intern()
{
}
Intern::Intern(const Intern &other)
{
	*this = other;
}

Form* Intern::createShrubberyCreationForm(const std::string &target)
{
	return new ShrubberyCreationForm(target);
}

Form* Intern::createRobotomyRequestForm(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

Form* Intern::createPresidentialPardonForm(const std::string &target)
{
	return new PresidentialPardonForm(target);
}

Intern &Intern::operator=(const Intern &other)
{
	if (this != &other)
	{
		*this = other;
	}
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	const std::string str[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	action actions[] = { &Intern::createShrubberyCreationForm, &Intern::createRobotomyRequestForm, &Intern::createPresidentialPardonForm};

	for (int i = 0; i < 3; i++) {
		if (name == str[i]) {
			std::cout << "Intern creates " << name << std::endl;
			return (this->*actions[i])(target);
		}
	}
	std::cout << "Intern makeForm Invalid args error" << std::endl;
	return NULL;
}



