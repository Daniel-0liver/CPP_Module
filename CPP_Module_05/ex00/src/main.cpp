/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 21:55:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/22 01:10:08 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat", 1);

	std::cout << *bureaucrat;
	bureaucrat->incrementGrade();

	return 0;
}