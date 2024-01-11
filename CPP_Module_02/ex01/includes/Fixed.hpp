/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 01:30:38 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 17:38:53 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_rawBits;
	static const int	_fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed( const int intValue );
	Fixed( const float floatValue );
	Fixed( const Fixed& copyFixed );
	Fixed &operator=( Fixed const &operatorFixed );
	int		getRawBits( void );
	void	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int 	toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
