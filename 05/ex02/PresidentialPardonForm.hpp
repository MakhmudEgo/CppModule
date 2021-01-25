//
// Created by Mahmud Jego on 1/25/21.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm&);
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);
	virtual ~PresidentialPardonForm();
	virtual void execute(Bureaucrat const & executor);

private:
	const std::string _target;
};


#endif //PRESIDENTIALPARDONFORM_HPP
