/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:07:14 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/13 21:12:00 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) { (void)copy; }

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	(void)copy;
	return *this;
}

void BitcoinExchange::fileChecker(char *file)
{
	std::ifstream inFile(file);
	std::ifstream dataFile("data.csv");
	if (!inFile.is_open() || !dataFile.is_open())
	{
		std::cerr << "Error: Could not open file" << file << std::endl;
		return;
	}
	std::map<std::string, double> dataMap;

	try
	{
		checkData(dataMap, dataFile);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	inFile.close();
	dataFile.close();
}

void checkData(std::map<std::string, double> &dataMap, std::ifstream &dataFile)
{
	std::string buffer;
	std::string date;
	double		price;

	if (!std::getline(dataFile, buffer))
	{
		
	}
}