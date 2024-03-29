/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 01:24:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 13:16:35 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie zombie("Foo");
	Zombie* z1 = newZombie ( "z1" );

	randomChump( "z2" );
	z1->announce();
	delete ( z1 );
	zombie.announce();
	return (0);
}
