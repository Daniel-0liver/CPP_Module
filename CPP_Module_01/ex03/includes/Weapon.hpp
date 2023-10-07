/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:40:37 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/07 21:15:57 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

class Weapon
{
private:
	std::string		_type;
public:
	Weapon();
	~Weapon();
	Weapon(const std::string type );
	const std::string	getType() const;
	void				setType(const std::string type );
};

#endif