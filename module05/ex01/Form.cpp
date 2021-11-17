#include "Form.hpp"

Form::Form()
	: _name("default")
	, _gradeToSign(LOWEST_GRADE)
	, _gradeToExec(LOWEST_GRADE)
	, _beSigned(false)
	{}

Form::Form(std::string name, int gradeToSign, int gradeToExec)
	: _name(name)
	, _gradeToSign(gradeToSign)
	, _gradeToExec(gradeToExec)
	, _beSigned(false)
{
	if (gradeToSign < HIGHEST_GRADE)
	{
		throw GradeTooHighException();
	}
	if (gradeToSign > LOWEST_GRADE)
	{
		throw GradeTooLowException();
	}	
	if (gradeToExec < HIGHEST_GRADE)
	{
		throw GradeTooHighException();
	}
	if (gradeToExec > LOWEST_GRADE)
	{
		throw GradeTooLowException();
	}	
}

Form::~Form()
{
}

Form::Form(const Form &other)
	: _name(other._name)
	, _gradeToSign(other._gradeToSign)
	, _gradeToExec(other._gradeToExec)
	, _beSigned(other._beSigned)
{
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		_beSigned = other._beSigned;
	}
	return *this;
}

const std::string &Form::getName() const
{
	return _name;
}
const int &Form::getGradeToSign() const
{
	return _gradeToSign;
}
const int &Form::getGradeToExec() const
{
	return _gradeToExec;
}
bool Form::getBeSigned() const
{
	return _beSigned;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_beSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

std::ostream &operator<<(std::ostream &os, const Form &other)
{
	os 
	<< "Form name: "
	<< other.getName()
	<< " grade to sign "
	<< other.getGradeToSign()
	<< " grade to exec "
	<< other.getGradeToExec()
	<< " be signed "
	<< (other.getBeSigned() ? "done." : "not yet.");

	return os;
}
