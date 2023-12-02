/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:05:46 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 00:58:12 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal( std::string type );
	Animal( const Animal &copy );
	virtual			~Animal();
	Animal			&operator=( const Animal &copy );
	std::string		getType() const;
	virtual void	makeSound() const;
};