/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 01:17:26 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/03 01:26:09 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	_inventory[4];
		int			_count;
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &copy );
		virtual ~MateriaSource();
		MateriaSource &operator=( const MateriaSource &copy );
		void		learnMateria( AMateria* );
		AMateria*	createMateria( std::string const & type );
};