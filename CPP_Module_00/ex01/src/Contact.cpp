/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:13:31 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/23 16:08:05 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName)
{
	this->_first_name = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	this->_last_name = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->_nick_name = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phone_number = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkest_secret = darkestSecret;
}

std::string	Contact::getFirstName(){
	return (_first_name);
}