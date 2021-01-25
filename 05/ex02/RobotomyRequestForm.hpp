//
// Created by Mahmud Jego on 1/25/21.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm&);
	RobotomyRequestForm& operator=(const RobotomyRequestForm&);
	virtual ~RobotomyRequestForm();
	virtual void execute(Bureaucrat const & executor);

private:
	const std::string _target;
};

#endif //ROBOTOMYREQUESTFORM_HPP
