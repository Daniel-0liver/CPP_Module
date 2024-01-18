/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:40:37 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 13:58:27 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
