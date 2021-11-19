#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
	: Form
	(
		"PresidentialPardonForm",
		PRESIDENTIAL_PARDON_SIGN,
		PRESIDENTIAL_PARDON_EXEC
	)
	, _target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
	: Form
	(
		"PresidentialPardonForm",
		PRESIDENTIAL_PARDON_SIGN,
		PRESIDENTIAL_PARDON_EXEC
	)
	, _target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	*this = other;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		_target = other._target;
		Form::operator=(other);
	}
	return *this;
}

void PresidentialPardonForm::executeForm() const
{
	std::cout << _target <<" has been pardoned by Zafod Beeblebrox." << std::endl;
}
