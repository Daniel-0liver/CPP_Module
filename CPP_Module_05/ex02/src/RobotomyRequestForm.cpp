#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) {
    *this = other;
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
    if (rand() % 2) {
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
        execute(executor);
    } else {
        std::cout << this->getTarget() << " robotomization failed." << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &other) {
    out << other.getName() << " is " << (other.getSigned() ? "signed" : "not signed") 
        << " and requires grade " << other.getGradeToSign() << " to sign and grade " 
            << other.getGradeToExecute() << " to execute." << std::endl;
    return (out);
}