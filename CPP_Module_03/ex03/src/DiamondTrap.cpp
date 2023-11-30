/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:41:40 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 20:47:27 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->setAll("ClapTrap", getFragTrapHitPoints(), getScavTrapEnergyPoints(), getFragTrapAttackDamage());
	this->_name = "DiamondTrap";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name ), ScavTrap( name ), FragTrap( name ) {
	std::cout << "DiamondTrap Parameter constructor called" << std::endl;
	this->setAll( name+"_clap_name", FragTrap::getFragTrapHitPoints(), getScavTrapEnergyPoints(), getFragTrapAttackDamage() );
	this->_name = name;
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj ) : ClapTrap( obj ), ScavTrap( obj ), FragTrap( obj ) {
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &obj ) {
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	if ( this != &obj )
		this->setAll( obj.getName(), obj.getHitPoints(), obj.getEnergyPoints(), obj.getAttackDamage() );
	return (*this);
}

void DiamondTrap::attack( std::string const &target ) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
}