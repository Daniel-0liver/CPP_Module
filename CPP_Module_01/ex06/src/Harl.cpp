/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:23:19 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/09 00:35:59 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void 	Harl::debug( void ) {
	std::cout << BLUE << "[ DEBUG ]" << COLOUR_END << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
	(this->*func_ptr[1])();
}

void 	Harl::info( void ) {
	std::cout << GREEN << "[ INFO ]" << COLOUR_END << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!If you did, I wouldn't be asking for more!" << std::endl << std::endl;
	(this->*func_ptr[2])();
}

void 	Harl::warning( void ) {
	std::cout << YELLOW << "[ WARNING ]" << COLOUR_END << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
	(this->*func_ptr[3])();
}

void 	Harl::error( void ) {
	std::cout << RED << "[ ERROR ]" << COLOUR_END << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain( std::string level ) {
	int	i;

	std::string levels[4] = { "DEBUG", "INFO", "WARNING" , "ERROR" };
	for ( i = 0; i < 4; i++ ) {
		if ( !( levels[i].compare( level ) ) ) {
			break;
		}
	}
	switch (i)
	{
	case 0:
		(this->*func_ptr[i])();
		break;
	case 1:
		(this->*func_ptr[i])();
		break;
	case 2:
		(this->*func_ptr[i])();
		break;
	case 3:
		(this->*func_ptr[i])();
		break;
	default:
		std::cout << LGRAY << "Probably complaining about insignificant problems" << COLOUR_END << std::endl;
		break;
	}
}

Harl::Harl() {
	this->func_ptr[0] = &Harl::debug;
	this->func_ptr[1] = &Harl::info;
	this->func_ptr[2] = &Harl::warning;
	this->func_ptr[3] = &Harl::error;
}

Harl::~Harl() {
	
}