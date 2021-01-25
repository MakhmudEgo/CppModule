//
// Created by Mahmud Jego on 1/25/21.
//

#ifndef INTERN_HPP
#define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern&);
	Intern& operator=(const Intern&);
	~Intern();
	Form* makeForm(const std::string& formName, const std::string& target);

	class NotFoundFormException : public std::exception {
	public:
		const char *what() const throw();
	};

private:
	Form *forms[3];
};


#endif //INTERN_HPP
