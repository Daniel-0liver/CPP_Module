/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:05:55 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/26 20:48:59 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a(10);
	
	a = Fixed( 1234.4321f );
	Fixed const b( a + a );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	
	Fixed const b( a - a );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	
	return 0;
}
