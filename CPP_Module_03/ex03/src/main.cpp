/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:17:36 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 20:44:48 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "---------------------" << std::endl;
	std::cout << "DiamondTrap tests" << std::endl;
	std::cout << "---------------------" << std::endl;
	DiamondTrap diamondTrap("test");
	diamondTrap.attack("target");
	diamondTrap.takeDamage(10);
	diamondTrap.beRepaired(10);
	diamondTrap.attack("target");
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();
	std::cout << "---------------------" << std::endl;
	return (0);
}