/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:55:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/23 01:00:23 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat *b1 = new Bureaucrat("BureaucratOne", 2);
	Bureaucrat *b2 = new Bureaucrat("BureaucratTwo", 149);

	std::cout << "BureaucratOne:\n";
	std::cout << *b1;
	
	try {
		b1->incrementGrade();
		std::cout << *b1;
		b1->incrementGrade();
		std::cout << *b1;
		b1->incrementGrade();
		std::cout << *b1;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << *b1;

	std::cout << "\n___________________________________\n";
	std::cout << "BureaucratTwo:\n";
	std::cout << *b2;
	
	try {
		b2->decrementGrade();
		std::cout << *b2;
		b2->decrementGrade();
		std::cout << *b2;
		b2->decrementGrade();
		std::cout << *b2;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << *b2;

	delete b1;
	delete b2;
	
	return 0;
}
