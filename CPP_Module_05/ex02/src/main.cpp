/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:07:12 by dateixei          #+#    #+#             */
/*   Updated: 2024/02/01 23:46:58 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// Test ShrubberyCreationForm
	std::cout << "--- Test ShrubberyCreationForm ---" << std::endl;
	Bureaucrat bureaucrat("Bureaucrat", 150);
	Bureaucrat bureaucrat2("Bureaucrat", 1);
	ShrubberyCreationForm form("home");
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
	bureaucrat2.signForm(form);
	bureaucrat2.executeForm(form);
	
	// Test RobotomyRequestForm
	std::cout << std::endl << "--- Test RobotomyRequestForm ---" << std::endl;
	RobotomyRequestForm form2("home");
	bureaucrat.signForm(form2);
	bureaucrat.executeForm(form2);
	bureaucrat2.signForm(form2);
	bureaucrat2.executeForm(form2);

	// Test PresidentialPardonForm
	std::cout << std::endl << "--- Test PresidentialPardonForm ---" << std::endl;
	PresidentialPardonForm form3("home");
	bureaucrat.signForm(form3);
	bureaucrat.executeForm(form3);
	bureaucrat2.signForm(form3);
	bureaucrat2.executeForm(form3);

	return (0);
}