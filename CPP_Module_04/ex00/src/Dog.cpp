/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:46:40 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/13 15:33:41 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" ) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &copy ) : Animal( copy ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &copy ) {
	std::cout << "Dog assignation operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Auau" << std::endl;
}