/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:51:39 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/27 17:58:15 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

ScalarConverte::ScalarConverte() {}

ScalarConverte::ScalarConverte(ScalarConverte const &other) {
	*this = other;
}

ScalarConverte::~ScalarConverte() {}

ScalarConverte &ScalarConverte::operator=(ScalarConverte const &other) {
	if (this != &other) {
	}
	return *this;
}

void	ScalarConverte::convert(std::string c) {
	std::cout << "char: ";
	if (c < 32 || c > 126)
		std::cout << "Non displayable" << std::endl;
	if else (c == "nan")
		std::cout << "impossible" << std::endl;
	else
		std::cout << "'" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}