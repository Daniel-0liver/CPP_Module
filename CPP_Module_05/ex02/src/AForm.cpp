/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:10:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/30 00:13:20 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _isSigned(false), _gradeToSign(1), _gradeToExecute(1) {}

AForm::~AForm() {}

AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute) 
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src) 
	: _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {}

AForm &AForm::operator=(AForm const &rhs)
{
	if (this != &rhs) {
		_isSigned = rhs._isSigned;
	}
	return (*this);
}

std::string const	AForm::getName() const { return (_name); }

bool				AForm::getSigned() const { return (_isSigned); }

int					AForm::getGradeToSign() const { return (_gradeToSign); }

int					AForm::getGradeToExecute() const { return (_gradeToExecute); }

void				AForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw AForm::GradeTooLowException();
	_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream& operator<<( std::ostream& os, const AForm& form) {
	os << form.getName() << " is " << (form.getSigned() ? "signed" : "not signed") 
		<< " and requires grade " << form.getGradeToSign() << " to sign and grade " 
			<< form.getGradeToExecute() << " to execute";
	return (os);
}