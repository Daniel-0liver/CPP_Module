/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:17:36 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 02:07:48 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	//create tests for ScavTrap
	ClapTrap clapTrap("Clap");
	ScavTrap scavTrap("Scav");
	std::cout << scavTrap.getHitPoints() << std::endl;
	std::cout << scavTrap.getEnergyPoints() << std::endl;
	scavTrap.attack("target");
	scavTrap.guardGate();
	scavTrap.takeDamage(5);
	std::cout << scavTrap.getHitPoints() << std::endl;
	std::cout << scavTrap.getEnergyPoints() << std::endl;
	return (0);
}