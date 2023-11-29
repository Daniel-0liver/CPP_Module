/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:17:34 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/29 20:52:01 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &obj ) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator = ( const ClapTrap &obj ) {
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	if ( this != &obj ) {
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return ( *this );
}

// Getters
std::string ClapTrap::getName( void ) const {
	return ( this->_name );
}

int ClapTrap::getHitPoints( void ) const {
	return ( this->_hitPoints );
}

int ClapTrap::getEnergyPoints( void ) const {
	return ( this->_energyPoints );
}

int ClapTrap::getAttackDamage( void ) const {
	return ( this->_attackDamage );
}

// Setters
void ClapTrap::setName( std::string name ) {
	this->_name = name;
}

void ClapTrap::setHitPoints( int hitPoints ) {
	this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints( int energyPoints ) {
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage( int attackDamage ) {
	this->_attackDamage = attackDamage;
}

// Methods
void ClapTrap::attack( std::string const &target ) {
	if ( getEnergyPoints() == 0 ) {
		std::cout << "ClapTrap " << getName() << " has no energy points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
	setEnergyPoints( getEnergyPoints() - 1 );
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if ( getHitPoints() == 0 ) {
		std::cout << "ClapTrap " << getName() << " has no hit points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << getName() << " take " << amount << " points of damage!" << std::endl;
	setHitPoints( getHitPoints() - amount );
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if ( getEnergyPoints() == 0 ) {
		std::cout << "ClapTrap " << getName() << " has no energy points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << getName() << " be repaired " << amount << " points of damage!" << std::endl;
	setHitPoints( getHitPoints() + amount );
	setEnergyPoints( getEnergyPoints() - 1 );
}