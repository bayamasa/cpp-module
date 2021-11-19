#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(LOWEST_GRADE)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < HIGHEST_GRADE)
	{
		throw GradeTooHighException();
	}
	if (grade > LOWEST_GRADE)
	{
		throw GradeTooLowException();
	}
	
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	return *this;
}

std::string const &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade <= HIGHEST_GRADE)
	{
		throw GradeTooHighException();
	}
	_grade--;

}

void Bureaucrat::decrementGrade()
{
	if (_grade >= LOWEST_GRADE)
	{
		throw GradeTooLowException();
	}
	_grade++;
}

void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
}

void Bureaucrat::checkGrade(int grade)
{
	if (grade < HIGHEST_GRADE)
	{
		throw GradeTooHighException();
	}
	if (grade > LOWEST_GRADE)
	{
		throw GradeTooLowException();
	}
}


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat& bureaucrat)
{
	os 
	<< bureaucrat.getName() 
	<< ", bureaucrat grade " 
	<< bureaucrat.getGrade()
	<< ".";
	return os;
}
