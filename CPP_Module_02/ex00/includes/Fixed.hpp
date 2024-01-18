/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 03:02:17 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 17:46:31 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
private:
	int					_rawBits;
	static const int	_fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed( const Fixed& copyFixed );
	Fixed &operator=( Fixed const &operatorFixed );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};
