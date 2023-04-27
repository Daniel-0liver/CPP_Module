/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:02:23 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/27 03:01:18 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Menu()
{	
	PhoneBook phoneBook;

	while (true)
	{
		phoneBook.PrintStartMessage();
		std::cin >> phoneBook.command;
		if (!phoneBook.command.compare("ADD"))
			phoneBook.ADD();
		else if (!phoneBook.command.compare("SEARCH"))
			phoneBook.SEARCH();
		else if (!phoneBook.command.compare("EXIT"))
			return ;
	}
}

void PhoneBook::ADD()
{
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter first name: ";
    std::cin >> firstName;
    Contacts[num_contact].setFirstName(firstName);

    std::cout << "Enter last name: ";
    std::cin >> lastName;
    Contacts[num_contact].setLastName(lastName);

    std::cout << "Enter nickname: ";
	std::cin >> nickname;
    Contacts[num_contact].setNickName(nickname);

    std::cout << "Enter phone number: ";
	std::cin >> phoneNumber;
    Contacts[num_contact].setPhoneNumber(phoneNumber);

    std::cout << "Enter darkest secret: ";
	std::cin >> darkestSecret;
    Contacts[num_contact].setDarkestSecret(darkestSecret);

    num_contact++;
    std::cout << "Contact added successfully." << std::endl;
}

void	PhoneBook::SEARCH()
{
	std::cout << "\n     Index|First name| Last name|  Nickname\n";
	for (int i = 0; i < num_contact; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << Contacts[i].getFirstName().substr(0, 9) << "|";
		std::cout << std::setw(10) << Contacts[i].getLastName().substr(0, 9) << "|";
		std::cout << std::setw(10) << Contacts[i].getNickName().substr(0, 9) << "|" << std::endl;
	}
}

void	PhoneBook::PrintStartMessage(void)
{
	std::cout << "\n\tType one of the following option and press ENTER." << std::endl;
	std::cout << GREEN << "\tADD: To add a contact." << ENDC << std::endl;
	std::cout << YELLOW << "\tSEARCH: To search a contact." << ENDC << std::endl;
	std::cout << RED << "\tEXIT: The program quits and the contacts are lost forever!" << ENDC << std::endl;
	std::cout << "\t";
}