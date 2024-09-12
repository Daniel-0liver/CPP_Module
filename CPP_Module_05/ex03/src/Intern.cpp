/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:26:51 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/10 17:50:04 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &src) {
	*this = src;
}

Intern &Intern::operator=(Intern const &rhs) {
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target) {
	int i = 0;
	AForm *form = NULL;
	std::string formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	while (i < 3 && formNames[i].compare(formName))
		i++;
	switch (i) {
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			throw UnknownFormException();
	}
	std::cout << "Intern creates " << form->getName() << " form" << std::endl;
	return (form);
}

const char *Intern::UnknownFormException::what() const throw() {
	return ("Unknown form");
}