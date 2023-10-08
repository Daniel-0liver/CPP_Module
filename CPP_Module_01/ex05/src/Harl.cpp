/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:23:19 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/09 00:32:41 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void 	Harl::debug( void ) {
	std::cout << BLUE << "DEBUG" << COLOUR_END << std::endl;
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
	std::string levels[4] = { "DEBUG", "INFO", "WARNING" , "ERROR" };
	for ( int i = 0; i < 4; i++ )
		if ( !( levels[i].compare( level ) ) )
			(this->*func_ptr[i])();
}

Harl::Harl() {
	this->func_ptr[0] = &Harl::debug;
	this->func_ptr[1] = &Harl::info;
	this->func_ptr[2] = &Harl::warning;
	this->func_ptr[3] = &Harl::error;
}

Harl::~Harl() {
	
}