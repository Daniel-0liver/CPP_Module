/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:36:37 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/05 03:08:39 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	_name = name;
}

Zombie::Zombie() {
	
}

Zombie::~Zombie() {
	std::cout << this->_name << ": Dyiiiiiiiiinnnngggg..." << std::endl;
}

void	Zombie::setName( std::string name ) {
	_name = name;
}

void	Zombie::announce( void ) {
	std::string name = this->_name;
	
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
