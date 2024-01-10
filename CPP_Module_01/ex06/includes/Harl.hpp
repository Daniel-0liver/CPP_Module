/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:15:42 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 14:00:17 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define RED "\033[0;31m"
# define BLUE "\033[0;36m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define LGRAY "\001\033[0;37m\002"
# define COLOUR_END "\033[0m"

#include <iostream>

class Harl {
private:
		void 		debug( void );
		void 		info( void );
		void 		warning( void );
		void 		error( void );
		void		(Harl::*func_ptr[4])();
public:
		Harl();
		~Harl();
		void		complain( std::string level );
};
