/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:48:24 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 00:53:12 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal( std::string type );
	WrongAnimal( const WrongAnimal &copy );
	~WrongAnimal();
	WrongAnimal	&operator=( const WrongAnimal &copy );
	std::string	getType() const;
	void		makeSound() const;
};