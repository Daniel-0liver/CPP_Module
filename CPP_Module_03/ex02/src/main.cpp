/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:17:36 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 03:19:04 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::cout << "---------------------" << std::endl;
	std::cout << "FragTrap tests" << std::endl;
	std::cout << "---------------------" << std::endl;
	FragTrap fragTrap1;
	FragTrap fragTrap2("fragTrap2");
	FragTrap fragTrap3(fragTrap2);
	fragTrap1 = fragTrap3;
	fragTrap1.attack("fragTrap2");
	fragTrap1.takeDamage(10);
	fragTrap1.beRepaired(10);
	fragTrap1.highFivesGuys();
	std::cout << "---------------------" << std::endl;
	return (0);
}