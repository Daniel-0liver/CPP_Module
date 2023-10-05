/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:34:40 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/05 03:07:39 by dateixei         ###   ########.fr       */
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
	Zombie();
	Zombie( std::string name );
	~Zombie();
	void	announce( void );
	void	setName( std::string name );
};
Zombie* 	zombieHorde( int N, std::string name );

#endif