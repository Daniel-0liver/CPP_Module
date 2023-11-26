/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:05:55 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/26 20:47:41 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed( const int intValue ) : _rawBits(intValue << _fractionalBits) {
	std::cout << "Int constructor called\n";
}

Fixed::Fixed( const float floatValue ) : _rawBits(roundf(floatValue * (1 << _fractionalBits))) {
	std::cout << "Float constructor called\n";
}

Fixed::Fixed( const Fixed& copyFixed ) : _rawBits(copyFixed._rawBits) {
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator=( Fixed const &operatorFixed ) {
	_rawBits = operatorFixed._rawBits;
	std::cout << "Copy assignment operator called\n";
	return ( *this );
}

Fixed Fixed::operator+( Fixed const &operatorFixed ) const {
	Fixed result;
	result.setRawBits(operatorFixed._rawBits + _rawBits);
	return ( result );
}


int		Fixed::getRawBits( void ) {
	std::cout << "getRawBits member function called\n";
	return( _rawBits );
}

void	Fixed::setRawBits( int const raw ) {
	_rawBits = raw;
}

float	Fixed::toFloat( void ) const {
	return ( _rawBits / ( float )( 1 << _fractionalBits ) );
}

int		Fixed::toInt( void ) const {
	return ( _rawBits >> _fractionalBits );
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed ) {
	os << fixed.toFloat();
	return os;
}