//
// Created by Mahmud Jego on 1/25/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("Robotomy Request", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robotomyRequestForm)
: Form(robotomyRequestForm.getName(), robotomyRequestForm.getGradeSign(),
robotomyRequestForm.getGradeExecute()), _target(robotomyRequestForm._target)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &robotomyRequestForm)
{
	if (this != &robotomyRequestForm)
	{
		return (*this);
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(const Bureaucrat &executor)
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
	std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
}
