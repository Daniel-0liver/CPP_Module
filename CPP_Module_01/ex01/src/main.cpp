/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:34:16 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/05 03:09:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	int	N = 5;
	Zombie *horde = zombieHorde(N, "Foo");
	if (!horde)
		return (-1);
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}

	delete[] horde;
	
	return (0);
}