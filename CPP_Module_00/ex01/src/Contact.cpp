/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:13:31 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/28 23:00:26 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName) {
	this->_first_name = firstName;
	std::string test;
}

void	Contact::setLastName(std::string lastName) {
	this->_last_name = lastName;
}

void	Contact::setNickName(std::string nickName) {
	this->_nick_name = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phone_number = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkest_secret = darkestSecret;
}

std::string	Contact::getFirstName() const {
	return (this->_first_name);
}

std::string	Contact::getLastName() const {
	return (this->_last_name);
}

std::string	Contact::getNickName() const {
	return (this->_nick_name);
}

std::string	Contact::getPhoneNumber() const {
	return (this->_phone_number);
}

std::string	Contact::getDarkestSecret() const {
	return (this->_darkest_secret);
}

int	Contact::sizeFirstName() const {
	return (this->_first_name.length());
}

int	Contact::sizeLastName() const {
	return (this->_last_name.length());
}

int	Contact::sizeNickName() const {
	return (this->_nick_name.length());
}

bool	Contact::field_is_empty() {
	if (_first_name.empty() || _last_name.empty() || _nick_name.empty()
		|| _phone_number.empty() || _darkest_secret.empty())
		return (true);
	return (false);
}

