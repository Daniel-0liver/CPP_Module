/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:59:56 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/29 23:39:05 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

std::ostream& 			operator<<( std::ostream& os, const Bureaucrat& bureaucrat) {
	return (os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl);
}

std::string const	Bureaucrat::getName() const {
	return (this->_name);
}

int 				Bureaucrat::getGrade() const {
	return (this->_grade);
}

void				Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void				Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

void				Bureaucrat::signForm(Form &form) {
	if (form.getSigned())
		std::cout << this->getName() << " cannot sign " << form.getName() << " because it's already signed" << std::endl;
	else
	{
		try {
			form.beSigned(*this);
			std::cout << this->getName() << " signs " << form.getName() << std::endl;
		}
		catch (std::exception &e) {
			std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
		}
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}



