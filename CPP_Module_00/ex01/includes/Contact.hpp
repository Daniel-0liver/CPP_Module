/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 17:10:12 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/28 02:05:18 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

#include <iostream>

class Contact
{
	private:
			std::string		_first_name;
			std::string		_last_name;
			std::string		_nick_name;
			std::string		_phone_number;
			std::string		_darkest_secret;
	public:
			void			setFirstName(std::string firstName);
			void			setLastName(std::string lastName);
			void			setNickName(std::string nickName);
			void			setPhoneNumber(std::string phoneNumber);
			void			setDarkestSecret(std::string darkSecret);
			std::string		getFirstName() const ;
			std::string		getLastName() const ;
			std::string		getNickName() const ;
			std::string		getPhoneNumber() const ;
			std::string		getDarkestSecret() const ;
			bool			field_is_empty();
};

#endif