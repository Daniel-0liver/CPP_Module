/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:20:40 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/28 22:34:43 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Menu() {	
	PhoneBook phoneBook;

	phoneBook.size_list = 0;
	while (true) {
		phoneBook.PrintStartMessage();
		std::getline(std::cin, phoneBook.command);
		if (!phoneBook.command.compare("ADD"))
			phoneBook.ADD();
		else if (!phoneBook.command.compare("SEARCH"))
			phoneBook.SEARCH();
		else if (!phoneBook.command.compare("EXIT"))
			return ;
	}
}

bool isNumeric(const char* str)
{
    if (*str == '\0')
        return false;
    char* endptr = 0;
    strtol(str, &endptr, 10);
    return (*endptr == '\0');
}

int main() {
	std::cout << "\tWELCOME TO MY AWESOME PHONE BOOK!!!\n" << std::endl;
	Menu();
	return (0);
}
