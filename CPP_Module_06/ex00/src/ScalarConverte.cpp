/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:51:39 by dateixei          #+#    #+#             */
/*   Updated: 2024/02/12 01:06:04 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"

enum e_type {
	UNKNOWN,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

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

int	checkType(std::string c) {
	if (c.length() == 1 && !isdigit(c[0]))
		return CHAR;
	
	return UNKNOWN;
}

void convertChar(std::string c) {
	int i = static_cast<int>(c[0]);
	std::cout << "char: ";
	if (i < 32 || i > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << c[0] << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	ScalarConverte::convert(std::string c) {
	int type = checkType(c);
	switch (type)
	{
		case CHAR:
			convertChar(c);
			break;
		default:
	}
}
	// } else {
	// 	try {
	// 		int i = std::atoi(c.c_str());
	// 		std::cout << "char: ";
	// 		if (i < 32 || i > 126)
	// 			std::cout << "Non displayable" << std::endl;
	// 		else
	// 			std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	// 		std::cout << "int: " << i << std::endl;
	// 		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	// 		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	// 	} catch (std::exception &e) {
	// 		std::cout << "char: impossible" << std::endl;
	// 		std::cout << "int: impossible" << std::endl;
	// 		std::cout << "float: impossible" << std::endl;
	// 		std::cout << "double: impossible" << std::endl;
	// 	}
	// }
	// try {
	// 	float f = std::atof(c.c_str());
	// 	std::cout << "char: ";
	// 	if (f < 32 || f > 126 || std::isnan(f))
	// 		std::cout << "Non displayable" << std::endl;
	// 	else
	// 		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
	// 	std::cout << "int: ";
	// 	if (f < INT_MIN || f > INT_MAX || std::isnan(f))
	// 		std::cout << "impossible" << std::endl;
	// 	else
	// 		std::cout << static_cast<int>(f) << std::endl;
	// 	std::cout << "float: " << f << "f" << std::endl;
	// 	std::cout << "double: " << static_cast<double>(f) << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << "char: impossible" << std::endl;
	// 	std::cout << "int: impossible" << std::endl;
	// 	std::cout << "float: impossible" << std::endl;
	// 	std::cout << "double: impossible" << std::endl;
	// }
	// try {
	// 	double d = std::strtod(c.c_str);
	// 	std::cout << "char: ";
	// 	if (d < 32 || d > 126 || std::isnan(d))
	// 		std::cout << "Non displayable" << std::endl;
	// 	else
	// 		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
	// 	std::cout << "int: ";
	// 	if (d < INT_MIN || d > INT_MAX || std::isnan(d))
	// 		std::cout << "impossible" << std::endl;
	// 	else
	// 		std::cout << static_cast<int>(d) << std::endl;
	// 	std::cout << "float: ";
	// 	if (d < -FLT_MAX || d > FLT_MAX || std::isnan(d))
	// 		std::cout << "impossible" << std::endl;
	// 	else
	// 		std::cout << static_cast<float>(d) << "f" << std::endl;
	// 	std::cout << "double: " << d << std::endl;
	// }
	// catch (std::exception &e) {
	// 	std::cout << "char: impossible" << std::endl;
	// 	std::cout << "int: impossible" << std::endl;
	// 	std::cout << "float: impossible" << std::endl;
	// 	std::cout << "double: impossible" << std::endl;
	// }