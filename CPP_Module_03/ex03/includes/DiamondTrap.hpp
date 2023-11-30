/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:40:22 by dateixei          #+#    #+#             */
/*   Updated: 2023/11/30 17:45:46 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : virtual public ClapTrap, public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &obj);
	~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &obj);
	void attack(std::string const &target);
	void whoAmI();
};