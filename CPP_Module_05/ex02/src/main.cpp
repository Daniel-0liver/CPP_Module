/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:07:12 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/30 00:07:24 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat bureaucrat("Bureaucrat", 150);
	Bureaucrat bureaucrat2("Bureaucrat", 1);
	ShrubberyCreationForm form("home");
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
	bureaucrat2.signForm(form);
	bureaucrat.executeForm(form);
	
	// Test RobotomyRequestForm
	std::cout << std::endl;
	std::cout << "Test RobotomyRequestForm" << std::endl;
	RobotomyRequestForm form2("home");
	std::cout << "Sign form2" << std::endl;
	bureaucrat.signForm(form2);
	std::cout << "Execute form2" << std::endl;
	bureaucrat.executeForm(form2);
	std::cout << "Sign form2" << std::endl;
	bureaucrat2.signForm(form2);
	std::cout << "Execute form2" << std::endl;
	bureaucrat.executeForm(form2);

	return (0);
}