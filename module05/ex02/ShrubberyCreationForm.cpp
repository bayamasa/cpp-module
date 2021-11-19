#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form
	(
		"ShrubberyCreation",
		SHRUBBERY_CREATION_SIGN,
		SHRUBBERY_CREATION_EXEC
	)
	, _target("default"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form(
		"ShrubberyCreation",
		SHRUBBERY_CREATION_SIGN,
		SHRUBBERY_CREATION_EXEC
	)
	, _target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	*this = other;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		_target = other._target;
		Form::operator=(other);
	}
	return *this;
}


void ShrubberyCreationForm::executeForm() const
{

	std::ofstream file(_target + "_shrubbery", std::ios::trunc);

	if (file.fail())
	{
		throw ("error output file open");

	}
		
	file << "    _\\/_" << std::endl;
	file << "     /\\" << std::endl;
	file << "    / \\" << std::endl;
	file << "    /  \\" << std::endl;
	file << "    /~~\\o" << std::endl;
	file << "   /o   \\" << std::endl;
	file << "  /~~*~~~\\" << std::endl;
	file << " o/     o \\" << std::endl;
	file << " /~~~~~~~~ \\~`" << std::endl;
	file << " /__*_______\\" << std::endl;
	file << "      ||" << std::endl;
	file << "   \\=====/" << std::endl;
	file << "    \\___/" << std::endl;

	file.close();
}
