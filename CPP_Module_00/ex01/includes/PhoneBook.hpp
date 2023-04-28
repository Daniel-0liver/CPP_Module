/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:23:56 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/28 22:23:57 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONE_BOOK_HPP__
# define __PHONE_BOOK_HPP__

# define BLACK	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define WHITE	"\033[1;37m"
# define ENDC	"\033[0m"

# include "Contact.hpp"
# include <iostream> // std
# include <iomanip> // setw
# include <cstdlib> // system

const int	MAX_CONTACTS = 8;

class PhoneBook
{
	private:
		Contact 	Contacts[MAX_CONTACTS];
		int			num_contact;
		std::string line_stop;
	public:
		PhoneBook() : num_contact(0) {}
		int			size_list;
		void		ADD(void);
		void		SEARCH(void);
		void		getContactInfo(void);
		void		PrintStartMessage(void);
		void		print_contacts(void);
		void		print_contact(int index);
		std::string	command;
};

void	Menu();
bool 	isNumeric(const char* str);


#endif