/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:13:31 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/26 01:45:12 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName){
	this->_first_name = firstName;
	std::string test;
}

void	Contact::setLastName(std::string lastName){
	this->_last_name = lastName;
}

void	Contact::setNickName(std::string nickName){
	this->_nick_name = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber){
	this->_phone_number = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret){
	this->_darkest_secret = darkestSecret;
}

std::string	Contact::getFirstName() const {
	return (_first_name);
}

std::string	Contact::getLastName() const {
	return (_last_name);
}

std::string	Contact::getNickName() const {
	return (_nick_name);
}

std::string	Contact::getPhoneNumber() const {
	return (_phone_number);
}

std::string	Contact::getDarkestSecret() const {
	return (_darkest_secret);
}