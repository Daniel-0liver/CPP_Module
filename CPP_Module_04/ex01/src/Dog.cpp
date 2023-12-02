/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:46:40 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 02:26:28 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" ), _brain( new Brain() ) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &copy ) : Animal( copy ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &copy ) {
	std::cout << "Dog assignation operator called" << std::endl;
	if ( this != &copy) {
		delete this->_brain;
		this->_brain = new Brain( *copy._brain );
		this->_type = copy._type;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Auau" << std::endl;
}