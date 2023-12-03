/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:56:56 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 01:07:53 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name( "default" ), _count(0) {
	std::cout << "Character Default constructor called" << std::endl;
	for ( int i = 0; i < 4; i++ )
		this->_inventory[i] = NULL;
}

Character::Character( std::string const & name ) : _name( name ), _count( 0 ) {
	std::cout << "Character Default constructor called" << std::endl;
	for ( int i = 0; i < 4; i++ )
		this->_inventory[i] = NULL;
}

Character::Character( const Character &copy ) {
	std::cout << "Character Copy constructor called" << std::endl;
	if ( this != &copy )
		*this = copy;
}

Character::~Character() {
	std::cout << "Character Destructor called" << std::endl;
	for ( int i = 0; i < 4; i++ )
		if ( this->_inventory[i] )
			delete this->_inventory[i];
}

Character &Character::operator=( const Character &copy ) {
	std::cout << "Character Assignation operator called" << std::endl;
	if ( this != &copy ) {
		this->_name = copy._name;
		for ( int i = 0; i < 4; i++ )
			if ( this->_inventory[i] )
				delete this->_inventory[i];
		for ( int i = 0; i < 4; i++ )
			this->_inventory[i] = copy._inventory[i]->clone();
		this->_count = copy._count;
	}
	return *this;
}

std::string const&	Character::getName() const {
	return this->_name;
}

void	Character::equip( AMateria* m ) {
	if ( this->_count < 4 ) {
		for ( int i = 0; i < 4; i++ ) {
			if ( this->_inventory[i] == NULL ) {
				this->_inventory[i] = m;
				this->_count++;
				return ;
			}
		}
	}
}

void	Character::unequip( int idx ) {
	if ( idx >= 0 && idx < 4 && this->_inventory[idx] ) {
		this->_inventory[idx] = NULL;
		this->_count--;
	}
}

void	Character::use( int idx, ICharacter& target ) {
	if ( idx >= 0 && idx < 4 && this->_inventory[idx] )
		this->_inventory[idx]->use( target );
}
