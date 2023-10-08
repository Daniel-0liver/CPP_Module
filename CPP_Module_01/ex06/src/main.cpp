/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:27:52 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/09 00:27:20 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    Harl harl;

	if (argc == 2)
    	harl.complain(std::string(argv[1]));
	else
		harl.complain("");
    return 0;
}
