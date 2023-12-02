/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 02:06:37 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 02:08:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain &copy ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain	&Brain::operator=( const Brain &other ) {
	std::cout << "Brain assignation operator called" << std::endl;
	if ( this != &other )
		for ( int i = 0; i < 100; i++ )
			this->ideas[ i ] = other.ideas[ i ];
	return *this;
}