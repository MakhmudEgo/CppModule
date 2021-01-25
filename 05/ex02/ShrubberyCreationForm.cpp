//
// Created by Mahmud Jego on 1/25/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("Shrubbery", 145, 137), _target(target + "_shrubbery")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm)
: Form(shrubberyCreationForm.getName(), shrubberyCreationForm.getGradeSign(),
shrubberyCreationForm.getGradeExecute()), _target(shrubberyCreationForm._target)
{}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubberyCreationForm)
{
	if (this != &shrubberyCreationForm)
	{
		return (*this);
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	executor.executeForm(*this);
	if (executor.getGrade() > this->getGradeExecute())
	{
		throw Bureaucrat::GradeTooLowException();
	}
	if (!this->isSigned())
	{
		throw Form::FormUnsignedException();
	}
	std::ofstream of(this->_target);
	int nWidth = 0;
	int nSize = 30;

	// ^
	for (int i = 0; i < nSize; ++i)
	{
		for (int j = nWidth; j < nSize; ++j)
		{
			of << ' ';
		}
		of << '*';
		for (int j = nSize; j < (nSize + nWidth + (nWidth - 1)); ++j)
		{
			of << '$';
		}
		i && of << '*';
		nWidth += 1;
		of << std::endl;
	}
	for (int i = 0; i <= nSize * 2; ++i)
	{
		if (i % 2 == 0)
		{
			of << '*';
		}
		else
		{
			of << '|';
		}
	}
	of << std::endl;

	// #
	for (int i = 0; i <= nSize / 6; ++i)
	{
		for (int j = 0; j < nSize - (nSize / 4); ++j)
		{
			of << ' ';
		}
		for (int j = 0; j <= nSize / 2; ++j)
		{
			of << '#';
		}
		of << std::endl;
	}
	of << std::endl << "By " << executor.getName() << std::endl;
}
