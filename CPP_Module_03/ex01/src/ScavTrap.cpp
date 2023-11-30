/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:13:19 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 01:56:17 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap Parameter constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &obj ) : ClapTrap(obj) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator = ( const ScavTrap &obj ) {
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if ( this != &obj ) {
		this->_name = obj.getName();
		this->_hitPoints = obj.getHitPoints();
		this->_energyPoints = obj.getEnergyPoints();
		this->_attackDamage = obj.getAttackDamage();
	}
	return ( *this );
}

void ScavTrap::attack( const std::string& target ) {
	if (getEnergyPoints() == 0) {
		std::cout << "ScavTrap " << getName() << " is out of energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void ScavTrap::guardGate( void ) {
	if (getEnergyPoints() == 0) {
		std::cout << "ScavTrap " << getName() << " is out of energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}