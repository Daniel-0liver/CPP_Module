/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:51:48 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 02:22:45 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type( "Animal" ) {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type( type ) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( const Animal &copy ) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=( const Animal &copy ) {
	std::cout << "Animal assignation operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string Animal::getType() const {
	return (this->_type);
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}