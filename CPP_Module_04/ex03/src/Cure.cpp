/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 01:11:04 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 01:26:31 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure( const Cure &copy ) : AMateria("cure") {
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = copy;
}

Cure::~Cure() {
	std::cout << "Cure Destructor called" << std::endl;
}

Cure &Cure::operator=( const Cure &copy ) {
	std::cout << "Cure Assignation operator called" << std::endl;
	if ( this != &copy )
		this->_type = copy._type;
	return ( *this );
}

AMateria*	Cure::clone() const {
	return new Cure( *this );
}

void	Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}