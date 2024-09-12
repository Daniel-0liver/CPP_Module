/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:07:12 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/10 17:36:20 by dateixei         ###   ########.fr       */
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
	// Subject test
	Intern someRandomIntern;
	AForm* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	
	// My tests
	Intern intern;
	Bureaucrat bureaucrat("Bureaucrat", 1);
	rrf->beSigned(bureaucrat);
	rrf->execute(bureaucrat);
	
	std::cout << "--- Test ShrubberyCreationForm ---\n";
	AForm *shrubberyCreationForm = intern.makeForm("shrubbery creation", "home");
	shrubberyCreationForm->beSigned(bureaucrat);
	shrubberyCreationForm->execute(bureaucrat);
	delete shrubberyCreationForm;

	std::cout << "--- Test RobotomyRequest ---\n";
	AForm *robotomyRequestForm = intern.makeForm("robotomy request", "home");
	robotomyRequestForm->beSigned(bureaucrat);
	robotomyRequestForm->execute(bureaucrat);
	delete robotomyRequestForm;

	std::cout << "--- Test PresidentialPardonForm ---\n";
	AForm *presidentialPardonForm = intern.makeForm("presidential pardon", "home");
	presidentialPardonForm->beSigned(bureaucrat);
	presidentialPardonForm->execute(bureaucrat);
	delete presidentialPardonForm;

	std::cout << "--- Test UnknownFormException ---\n";
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

	delete rrf;
	
	return (0);
}