/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:18:54 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/15 01:45:47 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char** argv)
{
	if (argc == 2)
	{
		try
		{
			expressionChecker(argv[1]);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cerr << "Error: Invalide argument." << std::endl;
	return (0);
}