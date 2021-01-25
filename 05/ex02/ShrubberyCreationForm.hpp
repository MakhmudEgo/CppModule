//
// Created by Mahmud Jego on 1/25/21.
//

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
	virtual ~ShrubberyCreationForm();
	virtual void execute(Bureaucrat const & executor);

private:
	const std::string _target;
};

#endif //SHRUBBERYCREATIONFORM_HPP
