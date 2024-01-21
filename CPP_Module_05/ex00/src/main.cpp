/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:55:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/21 23:22:11 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 0);

	std::cout << *bureaucrat;
	
	std::cout << bureaucrat->getGrade() << std::endl;

	try {
		Bureaucrat daniel("Daniel", 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}