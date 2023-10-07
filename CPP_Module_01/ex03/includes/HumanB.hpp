/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:40:34 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/07 22:11:02 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMAN_B_HPP__
# define __HUMAN_B_HPP__

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string		_name;
	Weapon*			_weapon;
public:
	HumanB( std::string name );
	~HumanB();
	const std::string	getName() const;
	void				setName( std::string name );
	void				setWeapon( Weapon& weapon );
	void				attack();
};

#endif