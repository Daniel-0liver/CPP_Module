/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:59:44 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/30 00:09:00 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
private:
	std::string const	_name;
	int 				_grade;
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	std::string const	getName() const;
	int 				getGrade() const;
	void				incrementGrade();
	void				decrementGrade();
	void				signForm(AForm &form);
	void				executeForm(AForm const &form) const;
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream& operator<<( std::ostream& os, const Bureaucrat& bureaucrat);