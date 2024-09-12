/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:55:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/10 17:02:39 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	std::cout << std::endl;
	std::cout << "--- Bureaucrat ---" << std::endl;
	Bureaucrat bureaucrat("Bureaucrat", 1);
	Bureaucrat bureaucrat2("Bureaucrat2", 150);
	std::cout << bureaucrat;
	std::cout << bureaucrat2;
	std::cout << std::endl;

	std::cout << "--- Form not signed---" << std::endl;
	Form form("Form", 1, 1);
	Form form2("Form2", 150, 150);
	std::cout << form;
	std::cout << form2;
	try
	{
		form.beSigned(bureaucrat2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	std::cout << "--- Bureaucrat sign Form ---" << std::endl;
	bureaucrat2.signForm(form);
	bureaucrat.signForm(form);
	bureaucrat2.signForm(form2);
	bureaucrat.signForm(form2);
	std::cout << std::endl;
	
	std::cout << "--- Form signed---" << std::endl;
	std::cout << form;
	std::cout << form2;
	std::cout << std::endl;
	
	return 0;
}
