//
// Created by Makhmud Ego on 24.01.2021.
//

#include "Form.hpp"

Form::Form(const std::string &name, const int& gradeSign, const int& gradeExecute)
: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (this->_gradeSign < 1 || this->_gradeExecute < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (this->_gradeSign > 150 || this->_gradeExecute > 150)
	{
		throw Form::GradeTooLowException();
	}
}

const std::string &Form::getName() const{
	return (this->_name);
}

bool Form::isSigned() const{
	return (this->_signed);
}

const int& Form::getGradeSign() const{
	return (this->_gradeSign);
}

const int& Form::getGradeExecute() const{
	return (this->_gradeExecute);
}

Form::~Form()
{}

Form::Form(const Form &form)
: _name(form._name), _signed(form._signed),
_gradeSign(form._gradeSign), _gradeExecute(form._gradeExecute)
{}

Form &Form::operator=(const Form &form)
{
	this->_signed = form._signed;
	return (*this);
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeSign)
	{
		this->_signed = true;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
	bureaucrat.signForm(*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (Bureaucrat::GradeTooHighException::what());
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (Bureaucrat::GradeTooLowException::what());
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Name: " << form.getName() << ", Signed: "
	<< (form.isSigned() ? "Yes" : "No") << ", GradeSign: " << form.getGradeSign()
	<< ", Grade Execute: " << form.getGradeExecute();
	return (os);
}
