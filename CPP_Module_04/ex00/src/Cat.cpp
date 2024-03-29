/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:44:03 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 02:29:49 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" ) {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat &copy ) : Animal( copy ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=( const Cat &copy ) {
	std::cout << "Cat assignation operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miau" << std::endl;
}