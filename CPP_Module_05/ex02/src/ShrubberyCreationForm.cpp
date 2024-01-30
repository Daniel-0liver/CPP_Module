#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if (this != &rhs)
        this->_target = rhs._target;
    return (*this);
}

std::string const ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    else if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else
    {
        std::ofstream ofs((this->getTarget() + "_shrubbery").c_str());
        if (!ofs.is_open())
            throw ShrubberyCreationForm::FileNotOpenException();
        ofs << "      /\\\n"
               "     /\\*\\\n"
               "    /\\O\\*\\\n"
               "   /*/\\/\\/\\\n"
               "  /\\O\\/\\*\\/\\\n"
               " /\\*\\/\\*\\/\\/\\\n"
               "/\\O\\/\\/*/\\/O/\\\n"
               "      ||\n"
               "      ||\n"
               "      ||\n";
        ofs.close();
    }
}

const char *ShrubberyCreationForm::FileNotOpenException::what() const throw() {
    return ("File not open");
}