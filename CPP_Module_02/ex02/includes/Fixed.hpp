/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:18:26 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/26 20:46:06 by dateixei         ###   ########.fr       */
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
	Fixed& operator=( Fixed const &operatorFixed );
	Fixed operator+( Fixed const &operatorFixed ) const;
	int		getRawBits( void );
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif