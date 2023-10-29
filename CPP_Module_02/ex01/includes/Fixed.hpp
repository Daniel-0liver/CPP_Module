/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 01:30:38 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/19 02:03:28 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP_
# define __FIXED_HPP_

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
	Fixed( const int raw );
	Fixed( const Fixed& copyFixed );
	Fixed &operator=( Fixed const &operatorFixed );
	int		getRawBits( void );
	void	setRawBits( int const raw );
};

#endif