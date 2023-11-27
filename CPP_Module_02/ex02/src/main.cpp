/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:05:55 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/27 02:52:42 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a(10);
	
	a = Fixed( 1234.4321f );
	Fixed const b( a + a );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	
	Fixed const c( a / 0 );
	std::cout << "a is " << (b > a) << std::endl;
	std::cout << "b is " << c << std::endl;
	
	return 0;
}
