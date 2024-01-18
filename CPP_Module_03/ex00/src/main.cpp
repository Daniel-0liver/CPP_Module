/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 03:17:36 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/11 15:57:15 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	//test for constructors
	std::cout << "\n -- Test for constructors -- \n";
	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapTrap2(clapTrap);
	ClapTrap clapTrap3;
	clapTrap3 = clapTrap2;

	//test for getters
	std::cout << "\n -- Test for getters -- \n";
	std::cout << "Name: " << clapTrap.getName() << std::endl;
	std::cout << "Hit points: " << clapTrap.getHitPoints() << std::endl;
	std::cout << "Energy points: " << clapTrap.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << clapTrap.getAttackDamage() << std::endl;
	
	//test for setters
	std::cout << "\n -- Test for setters -- \n";
	clapTrap.setName("ClapTrap2");
	clapTrap.setHitPoints(20);
	clapTrap.setEnergyPoints(20);
	clapTrap.setAttackDamage(20);
	std::cout << "Name: " << clapTrap.getName() << std::endl;
	std::cout << "Hit points: " << clapTrap.getHitPoints() << std::endl;
	std::cout << "Energy points: " << clapTrap.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << clapTrap.getAttackDamage() << std::endl;
	
	//test for methods
	std::cout << "\n -- Test for methods -- \n";
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(5);
	clapTrap.beRepaired(5);
	
	//test for copy constructor
	std::cout << "\n -- Test for copy constructor -- \n";
	std::cout << "Name: " << clapTrap2.getName() << std::endl;
	std::cout << "Hit points: " << clapTrap2.getHitPoints() << std::endl;
	std::cout << "Energy points: " << clapTrap2.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << clapTrap2.getAttackDamage() << std::endl;
	
	//test for assignation operator
	std::cout << "\n -- Test for assignation operator -- \n";
	std::cout << "Name: " << clapTrap3.getName() << std::endl;
	std::cout << "Hit points: " << clapTrap3.getHitPoints() << std::endl;
	std::cout << "Energy points: " << clapTrap3.getEnergyPoints() << std::endl;
	std::cout << "Attack damage: " << clapTrap3.getAttackDamage() << std::endl;
	
	//tests for energy points
	std::cout << "\n -- Test for energy points -- \n";
	clapTrap.setEnergyPoints(-1);
	clapTrap.attack("Enemy");
	clapTrap.setHitPoints(-1);
	clapTrap.setEnergyPoints(20);
	clapTrap.attack("Enemy");

	std::cout << "\n -- Destructors -- \n";
	
	return (0);
}