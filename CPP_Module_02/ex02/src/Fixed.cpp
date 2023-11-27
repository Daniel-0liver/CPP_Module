/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:05:55 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/27 14:50:21 by dateixei         ###   ########.fr       */
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

std::ostream& operator<<( std::ostream& os, const Fixed& fixed ) {
	os << fixed.toFloat();
	return os;
}

Fixed&	Fixed::operator=( const Fixed &operatorFixed ) {
	_rawBits = operatorFixed._rawBits;
	std::cout << "Copy assignment operator called\n";
	return ( *this );
}

/*Comparison operators: >, <, >=, <=, == and !=.*/
bool	Fixed::operator>( const Fixed &operatorFixed ) const {
	return ( this->_rawBits > operatorFixed._rawBits );
}

bool	Fixed::operator<( const Fixed &operatorFixed ) const {
	return ( this->_rawBits < operatorFixed._rawBits );
}

bool	Fixed::operator>=( const Fixed &operatorFixed ) const {
	return ( this->_rawBits >= operatorFixed._rawBits );
}

bool	Fixed::operator<=( const Fixed &operatorFixed ) const {
	return ( this->_rawBits <= operatorFixed._rawBits );
}

bool	Fixed::operator==( const Fixed &operatorFixed ) const {
	return ( this->_rawBits == operatorFixed._rawBits );
}

bool	Fixed::operator!=( const Fixed &operatorFixed ) const {
	return ( this->_rawBits != operatorFixed._rawBits );
}

/*Arithmetic operators: +, -, *, and /.*/
Fixed	Fixed::operator+( const Fixed &operatorFixed ) const {
	Fixed result;

	result.setRawBits(_rawBits + operatorFixed._rawBits);
	return ( result );
}

Fixed	Fixed::operator-( const Fixed &operatorFixed ) const {
	Fixed result;

	result.setRawBits( _rawBits - operatorFixed._rawBits);
	return ( result );
}

Fixed	Fixed::operator*( const Fixed &operatorFixed ) const {
	Fixed result;

	result.setRawBits( (_rawBits * operatorFixed._rawBits) >> _fractionalBits);
	return ( result );
}

Fixed	Fixed::operator/( const Fixed &operatorFixed ) const {
	Fixed result;

	if ( operatorFixed._rawBits == 0 ) {
		std::cout << "Cannot divide by zero\n";
		return ( *this );
	}
	result.setRawBits( ((_rawBits << _fractionalBits) / operatorFixed._rawBits));
	return ( result );
}

/*increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, that will increase or decrease the fixed-point value from
the smallest representable ε such as 1 + ε > 1.*/
Fixed&	Fixed::operator++( void ) {
	_rawBits++;
	return ( *this );
}

Fixed	Fixed::operator++( int ) {
	Fixed	temp( *this );

	_rawBits++;
	return ( temp );
}

Fixed& Fixed::operator--( void ) {
	_rawBits--;
	return ( *this );
}

Fixed	Fixed::operator--( int ) {
	Fixed	temp( *this );
	
	_rawBits--;
	return ( temp );
}

/*Public overloaded member functions*/
Fixed&	Fixed::min( Fixed& a, Fixed& b ) {
	if ( a <= b )
		return ( a );
	else
		return ( b );
}

const Fixed&	Fixed::min( const Fixed& a, const Fixed& b ) {
	if ( a <= b )
		return ( a );
	else
		return ( b );
}

Fixed&	Fixed::max( Fixed& a, Fixed& b ) {
	return (( a >= b ) ? a : b);
}

const Fixed&	Fixed::max( const Fixed& a, const Fixed& b ) {
	return (( a >= b ) ? a : b);
}