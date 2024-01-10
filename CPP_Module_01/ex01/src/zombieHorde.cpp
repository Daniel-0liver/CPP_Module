/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:37:15 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 13:39:00 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0 || name.size() <= 0) {
		std::cout << "Invalid input" << std::endl;
		return (NULL);
	}

	Zombie*	horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		horde[i].setName( name );
	}

	return (horde);
}
