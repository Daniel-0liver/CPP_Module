/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 01:09:35 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 01:09:50 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure( const Cure &copy );
		virtual ~Cure();
		Cure &operator=( const Cure &copy );
		AMateria*	clone() const;
		void		use( ICharacter& target );
};