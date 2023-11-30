/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:11:57 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 20:41:43 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &obj );
		~ScavTrap();
		ScavTrap &operator = (const ScavTrap &obj);
		void 	attack( const std::string& target );
		void 	guardGate( void );
		int		getScavTrapEnergyPoints( void );
};