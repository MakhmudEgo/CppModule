//
// Created by Mahmud Jego on 1/25/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: Form("Presidential Pardon", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm)
: Form(presidentialPardonForm.getName(), presidentialPardonForm.getGradeSign(),
presidentialPardonForm.getGradeExecute()), _target(presidentialPardonForm._target)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &presidentialPardonForm)
{
	if (this != &presidentialPardonForm)
	{
		return (*this);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(const Bureaucrat &executor)
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
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
