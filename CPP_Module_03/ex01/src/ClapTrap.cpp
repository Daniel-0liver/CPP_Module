/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:09:40 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/29 21:17:01 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors & Destructors
ClapTrap::ClapTrap() : _name("Default"), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
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
void ClapTrap::attack( const std::string& target ) {
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if ( this->_hitPoints == 0 ) {
		std::cout << "ClapTrap " << this->_name << " has no hit points!" << std::endl;
		return ;
	}
	if ( this->_hitPoints < (int)amount ) {
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << this->_name << " has no hit points!" << std::endl;
		return ;
	}
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if ( this->_hitPoints == 0 ) {
		std::cout << "ClapTrap " << this->_name << " has no hit points!" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " has been repaired by " << amount << " points!" << std::endl;
}