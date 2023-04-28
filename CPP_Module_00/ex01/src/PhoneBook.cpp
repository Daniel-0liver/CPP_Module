/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:02:23 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/28 03:07:05 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	Menu()
{	
	PhoneBook phoneBook;

	phoneBook.size_list = 1;
	while (true)
	{
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

void PhoneBook::ADD()
{
	system("clear");
	getContactInfo();
	if (Contacts[num_contact].field_is_empty())
	{
		std::cout << RED << "\t\tNo field can be empty, please try again!\n" << ENDC;
		std::getline(std::cin, line_stop);
		return ;
	}
	else 
	{
		if (num_contact >= MAX_CONTACTS - 1)
		{
			num_contact = 0;
			return ;
		}
		if (size_list < MAX_CONTACTS)
			size_list = num_contact;
		num_contact++;
	}
	std::cout << GREEN << "\t\tContact added sucefully, press ENTER to return" << ENDC;
	std::getline(std::cin, line_stop);
}

void	PhoneBook::SEARCH()
{
	print_contacts();
	print_contact(0);
}

void	PhoneBook::PrintStartMessage(void)
{
	system("clear");
	std::cout << "\n\tType one of the following option and press ENTER." << std::endl;
	std::cout << GREEN << "\tADD: To add a contact." << ENDC << std::endl;
	std::cout << YELLOW << "\tSEARCH: To search a contact." << ENDC << std::endl;
	std::cout << RED << "\tEXIT: The program quits and the contacts are lost forever!" << ENDC << std::endl;
	std::cout << "\t";
}

void	PhoneBook::getContactInfo(void)
{
	std::string	input;

	std::cout << "\tEnter First Name: ";
	std::getline(std::cin, input);
	Contacts[num_contact].setFirstName(input);

	std::cout << "\tEnter Last Name: ";
	std::getline(std::cin, input);
	Contacts[num_contact].setLastName(input);

	std::cout << "\tEnter Nickname: ";
	std::getline(std::cin, input);
	Contacts[num_contact].setNickName(input);

	std::cout << "\tEnter \tPhone Number: ";
	std::getline(std::cin, input);
	Contacts[num_contact].setPhoneNumber(input);

	std::cout << "\tEnter Darkest Secret: ";
	std::getline(std::cin, input);
	Contacts[num_contact].setDarkestSecret(input);
}

void	PhoneBook::print_contact(int index)
{
	system("clear");
	std::cout << GREEN << "\tFirst Name     : " << ENDC << Contacts[index].getFirstName() << std::endl;
	std::cout << GREEN << "\tLast Name      : " << ENDC << Contacts[index].getLastName() << std::endl;
	std::cout << GREEN << "\tNickname       : " << ENDC << Contacts[index].getNickName() << std::endl;
	std::cout << GREEN << "\tPhone Number   : " << ENDC << Contacts[index].getPhoneNumber() << std::endl;
	std::cout << GREEN << "\tDarkest Secret : " << ENDC << Contacts[index].getDarkestSecret() << std::endl;
	std::cout << YELLOW << "\t\tPress ENTER to return\n\t" << ENDC;
	std::getline(std::cin, line_stop);
}

void	PhoneBook::print_contacts(void)
{
	system("clear");
	std::cout << GREEN << std::endl;
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i = 0; i <= size_list; i++) {
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(9) << Contacts[i].getFirstName().substr(0, 9) << ".";
		std::cout << "|" << std::setw(9) << Contacts[i].getLastName().substr(0, 9) << ".";
		std::cout << "|" << std::setw(9) << Contacts[i].getNickName().substr(0, 9) << "." << "|" << std::endl;
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	std::cout << YELLOW << "\t\tPress ENTER to continue\n\t" << ENDC;
	std::getline(std::cin, line_stop);
}