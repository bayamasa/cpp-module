#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
	: Form
	(
		"RobotomyRequest",
		ROBOTOMY_REQUEST_SIGN,
		ROBOTOMY_REQUEST_EXEC
	)
	, _target("default"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form
	(
		"RobotomyRequest",
		ROBOTOMY_REQUEST_SIGN,
		ROBOTOMY_REQUEST_EXEC
	)
	, _target(target){}


RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	*this = other;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	
	if (this != &other)
	{
		_target = other._target;
		Form::operator=(other);
	}
	return *this;
}

void RobotomyRequestForm::executeForm() const
{
	srand(time(NULL));
	if (rand() % 2 == 0)
	{
		std::cout << _target << " has been robotomized" << std::endl;
	}
}
