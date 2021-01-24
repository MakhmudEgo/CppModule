//
// Created by Makhmud Ego on 24.01.2021.
//
#define NDEBUG
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "hello day 05 ex 00" << std::endl;
	Bureaucrat bureaucrat("scopycat", 1);
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
}
