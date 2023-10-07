/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:40:48 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/07 22:03:30 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	Weapon::getType() const {
	return (this->_type);
}

void	Weapon::setType(const std::string type ) {
	this->_type = type;
}

Weapon::Weapon(const std::string type ) {
	this->setType(type);
}

Weapon::Weapon() {
	
}

Weapon::~Weapon() {
}