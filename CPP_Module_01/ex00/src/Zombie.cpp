/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 01:43:13 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/03 01:58:20 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string		Zombie::getName( void ) {
	return (this->_name);
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}

void	Zombie::announce( void ) {
	std::string name = getName();
	
	std::cout << name << std::endl;
}

Zombie::Zombie( std::string name ) {
	setName(name);
}

Zombie::~Zombie()
{
}