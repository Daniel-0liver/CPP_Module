/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:20:40 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/23 14:44:50 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook PhoneBook;
	Contact	Contact;

	std::cout << "\tWELCOME TO MY AWESOME PHONE BOOK!!!\n" << std::endl;
	Menu(&PhoneBook, &Contact);
	return (0);
}
