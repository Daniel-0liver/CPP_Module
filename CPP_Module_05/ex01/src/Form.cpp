/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:07:11 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/24 00:31:17 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {
	*this = src;
}

Form::~Form() {}

Form &Form::operator=(Form const &rhs) {
	if (this != &rhs)
		this->_signed = rhs._signed;
	return (*this);
}

std::string const	Form::getName() const {
	return (this->_name);
}

bool				Form::getSigned() const {
	return (this->_signed);
}

int					Form::getGradeToSign() const {
	return (this->_gradeToSign);
}

int					Form::getGradeToExecute() const {
	return (this->_gradeToExecute);
}

void				Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char 			*Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char 			*Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream& 		operator<<( std::ostream& os, const Form& form) {
	return (os << form.getName() << ", form grade to sign " << form.getGradeToSign() << ", form grade to execute " << form.getGradeToExecute() << ", form is signed " << form.getSigned() << std::endl);
}

