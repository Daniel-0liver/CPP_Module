/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 02:10:42 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 03:15:28 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		// Constructors & Destructors
		FragTrap();
		FragTrap( std::string name );
		FragTrap( const FragTrap &obj );
		~FragTrap();
		FragTrap &operator = (const FragTrap &obj);
		// Methods
		void attack( const std::string& target );
		void highFivesGuys( void );
};
