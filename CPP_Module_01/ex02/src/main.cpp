/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:25:00 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 13:46:45 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	std::string		myString = "HI THIS IS BRAIN";

	std::string*	stringPTR = &myString;

	std::string&	stringREF = myString;

	std::cout << "\nAddress of myString  = " << &myString << std::endl;
	std::cout << "Address of stringPTR = " << stringPTR << std::endl;
	std::cout << "Address of stringREF = " << &stringREF << std::endl << std::endl;

	std::cout << "Value of myString  = " << myString << std::endl;
	std::cout << "Value of stringPTR = " << *stringPTR << std::endl;
	std::cout << "Value of stringREF = " << stringREF << std::endl << std::endl;
}
