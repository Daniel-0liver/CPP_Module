/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:51:39 by dateixei          #+#    #+#             */
/*   Updated: 2024/03/27 22:14:13 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::ScalarConverter(const ScalarConverter &copy) { *this = copy; }

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &change)
{
	(void)change;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

int ScalarConverter::countOccur(const std::string &input, const char targetChar)
{
	int count = 0;
	for (unsigned int i = 0; i < input.length(); i++)
	{
		if (input[i] == targetChar)
			count++;
	}
	return (count);
}

bool ScalarConverter::checkInput(const std::string &input)
{
	int point_nb = ScalarConverter::countOccur(input, '.');
	if (point_nb > 1)
		return false;
	else if (point_nb)
	{
		unsigned int i = 0;
		for (; i < input.length() && (std::isdigit(input[i]) || input[i] == '.'); i++)
			;
		if (i >= 3 && (input[i] == 'f' || !input[i]) && !input[i+1])
			return true;
		else
			return false;
	}
	return true;
}

bool ScalarConverter::onlyZero(const std::string &input)
{
	unsigned int i = 0;
	for (; i < input.length() && std::isdigit(input[i]); i++)
		;
	i++;
	for (; i < input.length() && input[i] == '0'; i++)
		;
	if (!input[i] || input[i] == 'f')
		return (true);
	return (false);
}

void ScalarConverter::convert(const std::string &input)
{
	if (!ScalarConverter::checkInput(input))
	{
		std::cout << RED << "Error: bad input" << RESET << std::endl;
		return;
	}

	float toFloat = std::atof(input.c_str());
	std::cout << toFloat << std::endl;
	char toChar = static_cast<char>(toFloat);
	std::cout << toChar << std::endl;
	int toInt = static_cast<int>(toFloat);
	double toDouble = static_cast<double>(toFloat);
	std::string infinite[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};

	if (((input[0] == '-' || input[0] == '+') && std::isalpha(input[1])) || std::isalpha(input[0]))
	{
		std::cout << BLUE << "char: " << RESET << "Impossible" << std::endl;
		std::cout << BLUE << "int: " << RESET << "Impossible" << std::endl;

		for (int i = 0; i < 6; i++)
		{
			if (infinite[i] == input)
			{
				if (i < 3)
				{
					std::cout << BLUE << "float: " << RESET << infinite[i] << std::endl;
					std::cout << BLUE << "double: " << RESET << infinite[i + 3] << std::endl;
				}
				else
				{
					std::cout << BLUE << "float: " << RESET << infinite[i - 3] << std::endl;
					std::cout << BLUE << "double: " << RESET << infinite[i] << std::endl;
				}
				return;
			}
		}
		std::cout << BLUE << "float: " << RESET << "Impossible" << std::endl;
		std::cout << BLUE << "double: " << RESET << "Impossible" << std::endl;
		return;
	}

	if (!std::isprint(toChar))
		std::cout << BLUE << "char: " << RESET << "Non displayable" << std::endl;
	else
		std::cout << BLUE << "char: " << RESET << "'" << toChar << "'" << std::endl;

	if (ScalarConverter::countOccur(input, '.') && ScalarConverter::onlyZero(input))
	{
		std::cout << BLUE << "int: " << RESET << toInt << std::endl;
		std::cout << BLUE << "float: " << RESET << toFloat << ".0f" << std::endl;
		std::cout << BLUE << "double: " << RESET << toDouble << ".0" << std::endl;
	}
	else if (ScalarConverter::countOccur(input, '.'))
	{
		std::cout << BLUE << "int: " << RESET << toInt << std::endl;
		std::cout << BLUE << "float: " << RESET << toFloat << "f" << std::endl;
		std::cout << BLUE << "double: " << RESET << toDouble << std::endl;
	}
	else
	{
		std::cout << BLUE << "int: " << RESET << toInt << std::endl;
		std::cout << BLUE << "float: " << RESET << toFloat << ".0f" << std::endl;
		std::cout << BLUE << "double: " << RESET << toDouble << ".0" << std::endl;
	}
}
