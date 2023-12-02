/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:51:48 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 00:43:26 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type( "Animal" ) {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : type( type ) {
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
	this->type = copy.type;
	return (*this);
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}