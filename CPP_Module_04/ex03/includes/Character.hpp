/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:53:19 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 00:56:35 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string			_name;
		AMateria*			_inventory[4];
		int					_count;
	public:
		Character();
		Character( std::string const & name );
		Character( const Character &copy );
		virtual ~Character();
		Character&			operator=( const Character &copy );
		std::string const&	getName() const;
		void 				equip( AMateria* m );
		void 				unequip( int idx );
		void 				use( int idx, ICharacter& target );
};