/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:25:59 by dateixei          #+#    #+#             */
/*   Updated: 2024/02/07 00:03:36 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <string>

class Intern
{
public:
	Intern();
	~Intern();
	Intern(Intern const &src);
	Intern &operator=(Intern const &rhs);
	AForm *makeForm(std::string form, std::string target);
	class UnknownFormException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};	
};