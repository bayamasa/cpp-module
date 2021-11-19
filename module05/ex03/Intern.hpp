#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
private:
	typedef Form* (Intern::*action)(const std::string &target);
public:
	Intern();
	~Intern();
	Intern(const Intern &other);
	Form* createShrubberyCreationForm(const std::string &target);
	Form* createRobotomyRequestForm(const std::string &target);
	Form* createPresidentialPardonForm(const std::string &target);
	Intern &operator=(const Intern &other);
	Form *makeForm(std::string name, std::string target); 
};

#endif
