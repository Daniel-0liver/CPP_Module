/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 02:51:48 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 12:56:35 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type( "AAnimal" ) {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type( type ) {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &copy ) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=( const AAnimal &copy ) {
	std::cout << "AAnimal assignation operator called" << std::endl;
	this->_type = copy._type;
	return (*this);
}

std::string AAnimal::getType() const {
	return (this->_type);
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal makeSound called" << std::endl;
}