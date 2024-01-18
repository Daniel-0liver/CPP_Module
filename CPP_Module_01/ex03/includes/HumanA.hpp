/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:40:31 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 13:58:48 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string		_name;
	Weapon&			_weapon;
public:
	HumanA( std::string name, Weapon& weapon );
	~HumanA();
	void				attack();
	const std::string	getName() const;
	void				setName( std::string name );
	void				setWeapon( Weapon weapon );
};
