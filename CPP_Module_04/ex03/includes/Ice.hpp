/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 01:12:47 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 01:12:56 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice( const Ice &copy );
		virtual ~Ice();
		Ice &operator=( const Ice &copy );
		AMateria*	clone() const;
		void		use( ICharacter& target );
};