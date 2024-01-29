/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:55:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/24 00:35:32 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	std::cout << "--- Bureaucrat ---" << std::endl;
	Bureaucrat bureaucrat("Bureaucrat", 1);
	Bureaucrat bureaucrat2("Bureaucrat2", 150);
	std::cout << bureaucrat << std::endl;
	
	std::cout << "--- Form ---" << std::endl;
	Form form("Form", 1, 1);
	Form form2("Form2", 150, 150);
	std::cout << form << std::endl;
	
	std::cout << "--- Bureaucrat sign Form ---" << std::endl;
	bureaucrat2.signForm(form);
	bureaucrat2.signForm(form2);
	bureaucrat.signForm(form);
	bureaucrat.signForm(form2);
	return 0;
}
