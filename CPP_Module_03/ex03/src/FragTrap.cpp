/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 02:13:48 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 20:43:44 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap Default constructor called" << std::endl;
	setAll("FragTrap", 100, 100, 30);
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << "FragTrap Parameter constructor called" << std::endl;
	setAll(name, 100, 100, 30);
}

FragTrap::FragTrap( const FragTrap &obj ) : ClapTrap(obj) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	if ( this != &obj )
		*this = obj;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap &FragTrap::operator = ( const FragTrap &obj ) {
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if ( this != &obj )
		setAll( obj.getName(), obj.getHitPoints(), obj.getEnergyPoints(), obj.getAttackDamage() );
	return ( *this );
}

void FragTrap::attack( const std::string& target ) {
	if ( checkEnergy() == false || checkHitPoints() == false)
		return ;
	std::cout << "FragTrap " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

void FragTrap::highFivesGuys( void ) {
	if ( checkEnergy() == false || checkHitPoints() == false)
		return ;
	std::cout << "FragTrap " << getName() << " have requested a high five" << std::endl;
	setEnergyPoints(getEnergyPoints() - 1);
}

int FragTrap::getFragTrapHitPoints( void ) {
	return ( getHitPoints() );
}

int FragTrap::getFragTrapAttackDamage( void ) {
	return ( getAttackDamage() );
}