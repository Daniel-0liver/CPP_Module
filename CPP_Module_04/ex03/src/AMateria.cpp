/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:36:34 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/13 15:52:41 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default") {
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria( const AMateria &copy ) {
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = copy;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria &AMateria::operator=( const AMateria &copy ) {
	std::cout << "AMateria Assignation operator called" << std::endl;
	if (this != &copy)
		this->_type = copy._type;
	return *this;
}

std::string const&	AMateria::getType() const {
	return this->_type;
}

void	AMateria::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
