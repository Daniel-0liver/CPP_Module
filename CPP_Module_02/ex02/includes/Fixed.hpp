/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:18:26 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/27 13:55:11 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP_
# define __FIXED_HPP_

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_rawBits;
	static const int 	_fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed( const int intValue );
	Fixed( const float floatValue );
	Fixed( const Fixed& copyFixed );
	Fixed& operator=( const Fixed &operatorFixed );
	int		getRawBits( void );
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
	
	/*Comparison operators: >, <, >=, <=, == and !=.*/
	bool	operator>( const Fixed &operatorFixed ) const;
	bool	operator<( const Fixed &operatorFixed ) const;
	bool	operator>=( const Fixed &operatorFixed ) const;
	bool	operator<=( const Fixed &operatorFixed ) const;
	bool	operator==( const Fixed &operatorFixed ) const;
	bool	operator!=( const Fixed &operatorFixed ) const;
	
	/*Arithmetic operators: +, -, *, and /.*/
	Fixed	operator+( const Fixed &operatorFixed ) const;
	Fixed	operator-( const Fixed &operatorFixed ) const;
	Fixed	operator*( const Fixed &operatorFixed ) const;
	Fixed	operator/( const Fixed &operatorFixed ) const;

	/*increment/decrement (pre-increment and post-increment, pre-decrement and
	post-decrement) operators, that will increase or decrease the fixed-point value from
	the smallest representable ε such as 1 + ε > 1.*/
	Fixed&	operator++( void );
	Fixed	operator++( int );
	Fixed&	operator--( void );
	Fixed	operator--( int );

	/*Public overloaded member functions min and max*/
	static Fixed&	min( Fixed& a, Fixed& b );
	static const Fixed&	min( const Fixed& a, const Fixed& b );
	static Fixed&	max( Fixed& a, Fixed& b );
	static const Fixed&	max( const Fixed& a, const Fixed& b );
};

std::ostream&	operator<<( std::ostream& os, const Fixed& fixed );

#endif