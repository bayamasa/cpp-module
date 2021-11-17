#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;
#include "Form.hpp"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	void checkGrade(int grade);
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	std::string const &getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form);
	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif
