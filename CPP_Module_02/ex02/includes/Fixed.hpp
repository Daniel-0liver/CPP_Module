/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:18:26 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/25 13:11:03 by dateixei         ###   ########.fr       */
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
	static const int 	_factionalBits = 8;
public:
	Fixed();
	~Fixed();
};

#endif