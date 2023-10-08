/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:23:19 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/08 20:44:05 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void 	Harl::debug( void ) {
	std::cout << LGRAY << "DEBUG" << COLOUR_END << std::endl;
}

void 	Harl::info( void ) {
	std::cout << GREEN << "INFO" << COLOUR_END << std::endl;
}

void 	Harl::warning( void ) {
	std::cout << YELLOW << "WARNING" << COLOUR_END << std::endl;
}

void 	Harl::error( void ) {
	std::cout << RED << "ERROR" << COLOUR_END << std::endl;
}

void	Harl::complain( std::string level ) {
	std::string levels[4] = { "debug", "info", "warning" , "error" };
	for ( int i = 0; i < 4; i++ )
		if ( !( levels[i].compare( level ) ) )
			(this->*ptr[i])();
}

Harl::Harl() {
	this->ptr[0] = &Harl::debug;
	this->ptr[1] = &Harl::info;
	this->ptr[2] = &Harl::warning;
	this->ptr[3] = &Harl::error;
}

Harl::~Harl() {
	
}