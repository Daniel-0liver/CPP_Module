/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:07:12 by dateixei          #+#    #+#             */
/*   Updated: 2024/02/06 00:43:55 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	// Test Intern
	Intern intern;
	Bureaucrat bureaucrat("Bureaucrat", 1);
	
	// Test ShrubberyCreationForm
	AForm *shrubberyCreationForm = intern.makeForm("shrubbery creation", "home");
	shrubberyCreationForm->beSigned(bureaucrat);
	shrubberyCreationForm->execute(bureaucrat);
	delete shrubberyCreationForm;

	// Test RobotomyRequestForm
	AForm *robotomyRequestForm = intern.makeForm("robotomy request", "home");
	robotomyRequestForm->beSigned(bureaucrat);
	robotomyRequestForm->execute(bureaucrat);
	delete robotomyRequestForm;

	// Test PresidentialPardonForm
	AForm *presidentialPardonForm = intern.makeForm("presidential pardon", "home");
	presidentialPardonForm->beSigned(bureaucrat);
	presidentialPardonForm->execute(bureaucrat);
	delete presidentialPardonForm;

	// Test UnknownFormException
	try
	{
		AForm *unknownForm = intern.makeForm("unknown form", "home");
		unknownForm->beSigned(bureaucrat);
		unknownForm->execute(bureaucrat);
		delete unknownForm;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}