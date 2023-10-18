/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:02:17 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/18 03:47:39 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP_
# define __FIXED_HPP_

# include <iostream>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_fractionalBits = 8;
public:
	Fixed();
	Fixed( const Fixed& copyFixed );
	~Fixed();
	Fixed &operator=( Fixed const &operatorFixed );
	int		getRawBits( void );
	void	setRawBits( int const raw );
};

#endif