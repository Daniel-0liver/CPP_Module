#pragma once

#include "AForm.hpp"
#include <string>
#include <iostream>
#include <fstream>

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        virtual ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
        std::string getTarget() const;
        void execute(Bureaucrat const &executor) const;
};