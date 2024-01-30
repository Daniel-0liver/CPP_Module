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

int main()
{
	Bureaucrat bureaucrat("Bureaucrat", 150);
	Bureaucrat bureaucrat2("Bureaucrat", 1);
	ShrubberyCreationForm form("home");
	bureaucrat.signForm(form);
	bureaucrat.executeForm(form);
	bureaucrat2.signForm(form);
	bureaucrat.executeForm(form);
	
	return (0);
}