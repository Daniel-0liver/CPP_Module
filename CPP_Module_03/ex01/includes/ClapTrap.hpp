/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:01:14 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/11 16:34:49 by dateixei         ###   ########.fr       */
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
		void		setName(const std::string name );
		void		setHitPoints(const int hitPoints );
		void		setEnergyPoints(const int energyPoints );
		void		setAttackDamage(const int attackDamage );
		void		setAll(const std::string name, int hitPoints, int energyPoints, int attackDamage );
};