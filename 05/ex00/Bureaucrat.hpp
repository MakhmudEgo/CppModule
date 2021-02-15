//
// Created by Makhmud Ego on 24.01.2021.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);
	virtual ~Bureaucrat();
	const std::string &getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char *what() const throw();
	};

private:
	const std::string _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif //BUREAUCRAT_HPP
