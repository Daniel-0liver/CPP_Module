/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:42:12 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/10 17:43:31 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) 
	: AForm(other), _target(other._target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other) {
    if (this != &other) {
        this->_target = other._target;
    }
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
    return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	srand (time(NULL));
    if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	else if (!this->getSigned())
		throw AForm::FormNotSignedException();
	else {
		std::cout << "*drilling noises*" << std::endl;
		if (rand() % 2)
			std::cout << this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << this->_target << " robotomization failed." << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &other) {
    out << other.getName() << " is " << (other.getSigned() ? "signed" : "not signed") 
        << " and requires grade " << other.getGradeToSign() << " to sign and grade " 
            << other.getGradeToExecute() << " to execute." << std::endl;
    return (out);
}