/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 21:05:46 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 02:22:08 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal
{
protected:
	std::string		_type;
public:
	AAnimal();
	AAnimal( std::string type );
	AAnimal( const AAnimal &copy );
	virtual			~AAnimal();
	AAnimal			&operator=( const AAnimal &copy );
	std::string		getType() const;
	virtual void	makeSound() const = 0;
};