/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:27:59 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/18 03:49:49 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed& copyFixed ) : _fixedPoint(copyFixed._fixedPoint) {
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=( Fixed const &operatorFixed ) {
	if ( this == &operatorFixed ) {
		return *this;
	}
	_fixedPoint = operatorFixed._fixedPoint;
	std::cout << "Copy assignment operator called\n";
	return *this;
}

int		Fixed::getRawBits( void ) {
	std::cout << "getRawBits member function called\n";
	return (_fixedPoint);
}
void	Fixed::setRawBits( int const raw ) {
	_fixedPoint = raw;
}