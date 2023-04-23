/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:02:23 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/23 01:53:45 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Menu(void)
{
	PhoneBook PhoneBook;

	PhoneBook.PrintStartMessage();
	std::cin >> PhoneBook.command;
	if (!PhoneBook.command.compare("ADD"))
		PhoneBook.ADD();
	else if (!PhoneBook.command.compare("SEARCH"))
		PhoneBook.SEARCH();
	else if (!PhoneBook.command.compare("EXIT"))
		return ;
	Menu();
}

void	PhoneBook::ADD(void)
{
	
}

void	PhoneBook::SEARCH(void)
{
	
}

void	PhoneBook::PrintStartMessage(void)
{
	std::cout << "\tType one of the following option and press ENTER." << std::endl;
	std::cout << GREEN << "\tADD: To add a contact." << ENDC << std::endl;
	std::cout << YELLOW << "\tSEARCH: To search a contact." << ENDC << std::endl;
	std::cout << RED << "\tEXIT: The program quits and the contacts are lost forever!" << ENDC << std::endl;
	std::cout << "\t";
}