//
// Created by Mahmud Jego on 1/25/21.
//

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &intern)
{
	operator=(intern);
}

Intern &Intern::operator=(const Intern &intern)
{
	if (this != &intern)
		return (*this);
	return (*this);
}

Intern::~Intern()
{}

Form *Intern::makeForm(const std::string &formName, const std::string &target)
{
	this->forms[0] = new PresidentialPardonForm(target);
	this->forms[1] = new RobotomyRequestForm(target);
	this->forms[2] = new ShrubberyCreationForm(target);
	for (int i = 0; i < 3; ++i)
	{
		if (formName != this->forms[i]->getName())
		{
			delete this->forms[i];
			this->forms[i] = nullptr;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		if (this->forms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->forms[i]);
		}
	}
	throw NotFoundFormException();
}

const char *Intern::NotFoundFormException::what() const throw()
{
	return "Not Found Form";
}