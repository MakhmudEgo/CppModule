//
// Created by Makhmud Ego on 24.01.2021.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: _name(name), _grade(grade)
{
	if (grade < 1)
	{
		throw GradeTooHighException();
	}
	if (grade > 150)
	{
		throw GradeTooLowException();
	}
}

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incGrade()
{
	if (this->_grade - 1 == 0)
	{
		throw GradeTooHighException();
	}
	else
	{
		this->_grade--;
	}
}

void Bureaucrat::decGrade()
{
	if (this->_grade + 1 == 150)
	{
		throw GradeTooLowException();
	}
	else
	{
		this->_grade++;
	}
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
	operator=(bureaucrat);
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	if (this != &bureaucrat)
	{
		this->_name = bureaucrat._name;
		this->_grade = bureaucrat._grade;
	}
	return (*this);
}

void Bureaucrat::signForm(const Form &form) const
{
	if (this->_grade <= form.getGradeSign())
	{
		std::cout << "Bureaucrat " << this->_name << " signs " << form.getName() << " form" << std::endl;
	}
	else
	{
		std::cout << "Bureaucrat " << this->_name << " cannot sign " << form.getName() << " form, because " << " Grade Too Low" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << '.';
	return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}
