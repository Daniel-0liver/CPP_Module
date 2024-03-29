/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:17:29 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 02:46:19 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
	public:
		// Constructors & Destructors
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( const ClapTrap &obj );
		~ClapTrap();
		ClapTrap &operator = (const ClapTrap &obj);
		// Methods
		void		attack( const std::string& target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );
		bool		checkEnergy( void );
		bool		checkHitPoints( void );
		// Getters
		std::string	getName( void ) const;
		int			getHitPoints( void ) const;
		int			getEnergyPoints( void ) const;
		int			getAttackDamage( void ) const;
		// Setters
		void		setName( std::string name );
		void		setHitPoints( int hitPoints );
		void		setEnergyPoints( int energyPoints );
		void		setAttackDamage( int attackDamage );
		void		setAll( std::string name, int hitPoints, int energyPoints, int attackDamage );
};