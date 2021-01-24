//
// Created by Makhmud Ego on 24.01.2021.
//
#define NDEBUG
#include "Form.hpp"

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

	std::cout << "ex 01" << std::endl;
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
	}

	return (0);
}
