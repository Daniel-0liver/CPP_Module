/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:58:15 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/24 00:39:26 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>


class Form;
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
	void				signForm(Form &form);
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