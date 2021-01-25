//
// Created by Makhmud Ego on 24.01.2021.
//
#define NDEBUG
#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "hello day 05 ex 00" << std::endl;
	Bureaucrat bureaucrat("scopycat", 2);
	try {
		Bureaucrat bureaucrat1("scopycat", 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; //cerr
	}
	std::cout << std::endl << std::endl;
	try {
		bureaucrat.incGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	bureaucrat.decGrade();
	std::cout << bureaucrat << std::endl;
	bureaucrat.incGrade();

	std::cout << std::endl << std::endl;
	try {
		bureaucrat.incGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << bureaucrat << std::endl;
	std::cout << std::endl << std::endl;

	try {
		Bureaucrat bureaucrat2("scopycat", 151);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << std::endl;
/*	std::cout << "ex 01" << std::endl;
	Form form("King", 1, 1);
	form.beSigned(bureaucrat);
	std::cout << form << std::endl;

	Bureaucrat bureaucrat1("drina", 5);
	Form form3("form3", 6, 6);
	form3.beSigned(bureaucrat1);
	try {
		form.beSigned(bureaucrat1);
	}
	catch (std::exception &e) {
		std:: cout << e.what() << std::endl;
	}

	try {
		Form form1("form1", 0, 0);
	}
	catch (std::exception &e) {
		std:: cout << e.what() << std::endl;
	}

	try {
		Form form2("form2", 151, 151);
	}
	catch (std::exception &e) {
		std:: cout << e.what() << std::endl;
	}*/
	Bureaucrat bureaucrat1("bure1", 150);
	ShrubberyCreationForm shrubberyCreationForm("hello");
	try {
		shrubberyCreationForm.execute(bureaucrat1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		shrubberyCreationForm.execute(bureaucrat);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	shrubberyCreationForm.beSigned(bureaucrat);
	shrubberyCreationForm.execute(bureaucrat);
	ShrubberyCreationForm hello(shrubberyCreationForm);
	std::cout << std::endl << std::endl;

	PresidentialPardonForm presidentialPardonForm("Scopycat");
	try {
		presidentialPardonForm.execute(bureaucrat1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		presidentialPardonForm.execute(bureaucrat);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	presidentialPardonForm.beSigned(bureaucrat);
	presidentialPardonForm.execute(bureaucrat);
	std::cout << std::endl << std::endl;

	std::cout << "roboto" << std::endl;
	RobotomyRequestForm robotomyRequestForm("gege");
	try {
		robotomyRequestForm.execute(bureaucrat1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		robotomyRequestForm.execute(bureaucrat);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	robotomyRequestForm.beSigned(bureaucrat);
	robotomyRequestForm.execute(bureaucrat);
	std::cout << std::endl << std::endl;

	std::cout << "Intern" << std::endl;
	Intern intern;
	try {
		intern.makeForm("Pardon", "hello");
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	Form *form13 =  intern.makeForm("Presidential Pardon", "hello");
	std::cout << form13->getName() << std::endl;
	delete form13;
	return (0);
}
