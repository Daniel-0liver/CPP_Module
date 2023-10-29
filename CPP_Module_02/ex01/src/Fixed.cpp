/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 01:32:13 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/19 02:04:02 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed( const int raw )


Fixed::Fixed( const Fixed& copyFixed ) : _rawBits(copyFixed._rawBits) {
	std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator=( Fixed const &operatorFixed ) {
	if ( this == &operatorFixed ) {
		return (*this);
	}
	_rawBits = operatorFixed._rawBits;
	std::cout << "Copy assignment operator called\n";
	return *this;
}

int		Fixed::getRawBits( void ) {
	std::cout << "getRawBits member function called\n";
	return (_rawBits);
}

void	Fixed::setRawBits( int const raw ) {
	_rawBits = raw;
}
