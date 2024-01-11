/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:27:59 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 15:36:06 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed& copyFixed ) {
    std::cout << "Copy constructor called\n";
    _rawBits = copyFixed.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=( Fixed const &operatorFixed ) {
	if ( this == &operatorFixed ) {
		return *this;
	}
	std::cout << "Copy assignment operator called\n";
	_rawBits = operatorFixed.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called\n";
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw ) {
	_rawBits = raw;
}