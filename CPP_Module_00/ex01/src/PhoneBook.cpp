/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:02:23 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/26 18:38:43 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Menu(PhoneBook *PhoneBook)
{
	PhoneBook->PrintStartMessage();
	std::cin >> PhoneBook->command;
	if (!PhoneBook->command.compare("ADD"))
		PhoneBook->ADD(PhoneBook);
	else if (!PhoneBook->command.compare("SEARCH"))
		PhoneBook->SEARCH(PhoneBook);
	else if (!PhoneBook->command.compare("EXIT"))
		return ;
	Menu(PhoneBook);
}

void	PhoneBook::ADD(PhoneBook *PhoneBook)
{
	int index = 0;

    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
	PhoneBook->Contacts[index].setFirstName(firstName);
	
    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);

    std::cout << "Contact added successfully." << std::endl;
	std::string test = PhoneBook->Contacts[0].getFirstName();
	std::cout << test << std::endl;
}

void	PhoneBook::SEARCH(PhoneBook *PhoneBook)
{
	std::cout << PhoneBook->Contacts[0].getFirstName() << std::endl;
}
		

void	PhoneBook::PrintStartMessage(void)
{
	std::cout << "\n\tType one of the following option and press ENTER." << std::endl;
	std::cout << GREEN << "\tADD: To add a contact." << ENDC << std::endl;
	std::cout << YELLOW << "\tSEARCH: To search a contact." << ENDC << std::endl;
	std::cout << RED << "\tEXIT: The program quits and the contacts are lost forever!" << ENDC << std::endl;
	std::cout << "\t";
}