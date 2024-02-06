/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 23:41:25 by dateixei          #+#    #+#             */
/*   Updated: 2024/02/04 13:54:24 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <fstream> // std::ofstream
#include <string> // std::string
#include <iostream> // std::cout, std::endl
#include <exception> // std::exception

class ShrubberyCreationForm : public AForm
{
private:
    std::string 	_target;
public:
    ShrubberyCreationForm();
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
    std::string const	getTarget() const;
    void                execute(Bureaucrat const &executor) const;
    class FileNotOpenException : public std::exception
    {
        public:
            virtual const char *what() const throw();
    };
};

