#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>

class Form;
#include "Bureaucrat.hpp"

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Form
{
private:
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExec;
	bool _beSigned;
public:
	Form();
	~Form();
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form(const Form &other);
	Form &operator=(const Form &other);
	void beSigned(Bureaucrat &bureaucrat);
	const std::string &getName() const;
	const int &getGradeToSign() const;
	const int &getGradeToExec() const;
	bool getBeSigned() const;
	void execute(Bureaucrat const & executor) const;
	virtual void executeForm() const = 0;
	class GradeTooHighException : public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};
	class FormSignedException : public std::exception {
	public:
		const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Form const &other);

#endif
