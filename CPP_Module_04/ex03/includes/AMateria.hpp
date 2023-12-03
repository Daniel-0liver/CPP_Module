/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:33:14 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 00:42:25 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string			_type;
	public:
		AMateria();
		AMateria( std::string const & type );
		AMateria( const AMateria &copy );
		virtual ~AMateria();
		AMateria &operator=( const AMateria &copy );
		std::string const&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use( ICharacter& target );
};