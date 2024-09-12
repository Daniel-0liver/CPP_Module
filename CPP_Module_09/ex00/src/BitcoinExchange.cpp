/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:07:14 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/12 02:32:06 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) {(void)copy;}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& copy) {(void)copy; return *this;}

void BitcoinExchange::fileChecker(char* file) {
	std::ifstream inFile(file);
	std::ifstream dataFile("data.csv");
	if(!inFile.is_open() || !dataFile.is_open()){
		std::cerr << "Error: Could not open file " << file << std::endl;
        return;
	}
	std::map<std::string, std::string> dataMap;
	std::string line;
	
	std::getline(dataFile, line);

	while (std::getline(dataFile, line))
	{
		std::istringstream ss(line);
		std::string date, exchangeRate;

		if (std::getline(ss, date, ',') && std::getline(ss, exchangeRate))
		{
			dataMap[date] = exchangeRate;
		}
	}
	
	for (std::map<std::string, std::string>::iterator it = dataMap.begin(); it != dataMap.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }
    inFile.close();
    dataFile.close();
}