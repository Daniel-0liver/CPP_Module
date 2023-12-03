/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 01:13:00 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 01:26:42 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice( const Ice &copy ) : AMateria("ice") {
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = copy;
}

Ice::~Ice() {
	std::cout << "Ice Destructor called" << std::endl;
}

Ice &Ice::operator=( const Ice &copy ) {
	std::cout << "Ice Assignation operator called" << std::endl;
	if ( this != &copy )
		this->_type = copy._type;
	return ( *this );
}

AMateria*	Ice::clone() const {
	return new Ice( *this );
}

void	Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}