//
// Created by Makhmud Ego on 24.01.2021.
//

#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
public:
	Form(const std::string &name, const int& gradeSign, const int& gradeExecute);
	Form(const Form&);
	Form& operator=(const Form&);
	virtual ~Form();
	const std::string &getName() const;
	bool isSigned() const;
	const int &getGradeSign() const;
	const int &getGradeExecute() const;
	void beSigned(const Bureaucrat&);

	class GradeTooHighException : public Bureaucrat::GradeTooHighException {
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public Bureaucrat::GradeTooLowException {
		virtual const char *what() const throw();
	};

private:
	const std::string _name;
	bool _signed;
	const int _gradeSign;
	const int _gradeExecute;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //FORM_HPP
