/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 01:20:29 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 01:56:41 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {
	std::cout << "MateriaSource Default constructor called" << std::endl;
	for ( int i = 0; i < 4; i++ )
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &copy ) {
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = copy;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource Destructor called" << std::endl;
	for ( int i = 0; i < 4; i++ )
		if ( this->_inventory[i] )
			delete this->_inventory[i];
}

MateriaSource &MateriaSource::operator=( const MateriaSource &copy ) {
	std::cout << "MateriaSource Assignation operator called" << std::endl;
	if ( this != &copy ) {
		for ( int i = 0; i < 4; i++ )
			if ( this->_inventory[i] )
				delete this->_inventory[i];
		for ( int i = 0; i < 4; i++ )
			this->_inventory[i] = copy._inventory[i]->clone();
	}
	return ( *this );
}

void	MateriaSource::learnMateria( AMateria* m ) {
	if ( this->_count < 4 ) {
		for ( int i = 0; i < 4; i++ ) {
			if ( !this->_inventory[i] ) {
				this->_inventory[i] = m;
				this->_count++;
				return ;
			}
		}
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type ) {
	for ( int i = 0; i < 4; i++ ) {
		if ( this->_inventory[i] && this->_inventory[i]->getType() == type )
			return this->_inventory[i]->clone();
	}
	return ( NULL );
}