/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:06:03 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/29 23:20:01 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>


class Bureaucrat;
class Form
{
private:
	std::string const	_name;
	bool				_isSigned;
	int const			_gradeToSign;
	int const			_gradeToExecute;
public:
	Form();
	~Form();
	Form(std::string const name, int gradeToSign, int gradeToExecute);
	Form(Form const &src);
	Form &operator=(Form const &rhs);
	std::string const	getName() const;
	bool				getSigned() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	void				beSigned(Bureaucrat &bureaucrat);
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

std::ostream& operator<<( std::ostream& os, const Form& form);