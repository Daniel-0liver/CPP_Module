/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:27:52 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/10 14:59:33 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    harl.complain("DEBUG");
	std::cout << std::endl;
    harl.complain("INFO");
	std::cout << std::endl;
    harl.complain("WARNING");
	std::cout << std::endl;
    harl.complain("ERROR");
	std::cout << std::endl;
    harl.complain("TEST");

    return 0;
}
