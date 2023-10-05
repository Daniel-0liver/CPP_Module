/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 01:43:23 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/05 02:16:38 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

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
#endif