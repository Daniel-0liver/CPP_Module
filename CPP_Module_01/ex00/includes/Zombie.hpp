/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 01:43:23 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 13:59:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
private:
	std::string		_name;
public:
	Zombie( std::string name );
	~Zombie();
	void			setName( std::string name );
	void			announce( void );
	std::string		getName( void );
};

Zombie* 		newZombie( std::string name );
void 			randomChump( std::string name );