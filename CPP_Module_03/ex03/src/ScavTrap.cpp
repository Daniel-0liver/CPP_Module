/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:13:19 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 20:41:54 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
	setAll("ScavTrap", 100, 50, 20);
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap Parameter constructor called" << std::endl;
	setAll(name, 100, 50, 20);
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
	if ( this != &obj )
		setAll( obj.getName(), obj.getHitPoints(), obj.getEnergyPoints(), obj.getAttackDamage() );
	return ( *this );
}

void ScavTrap::attack( const std::string& target ) {
	if ( checkEnergy() == false || checkHitPoints() == false)
		return ;
	std::cout << "ScavTrap " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	setEnergyPoints( getEnergyPoints() - 1 );
}

void ScavTrap::guardGate( void ) {
	if ( checkEnergy() == false || checkHitPoints() == false)
		return ;
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode" << std::endl;
	setEnergyPoints( getEnergyPoints() - 1 );
}

int ScavTrap::getScavTrapEnergyPoints( void ) {
	return ( getEnergyPoints() );
}