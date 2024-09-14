/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:07:14 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/14 14:18:48 by dateixei         ###   ########.fr       */
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
		std::cerr << "Error: Could not open file." << file << std::endl;
		return;
	}
	std::map<std::string, double> dataMap;

	try
	{
		validateData(dataMap, dataFile);
		compareValues(dataMap, inFile);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		inFile.close();
		dataFile.close();
		return;
	}
}

void BitcoinExchange::validateData(std::map<std::string, double> &dataMap, std::ifstream &dataFile)
{
	std::string buffer;
	std::string date;
	double price;

	if (!std::getline(dataFile, buffer))
		throw EmptyFile();
	{
		try
		{
			getInfo(buffer, date, price);
			dataMap.insert(std::make_pair(date, price));
		}
		catch (const std::exception &e)
		{
		}
	}
	while (std::getline(dataFile, buffer))
	{
		getInfo(buffer, date, price);
		dataMap.insert(std::make_pair(date, price));
	}
}

void BitcoinExchange::compareValues(std::map<std::string, double> &dataMap, std::ifstream &inFile)
{
	std::string buffer;
	if (!std::getline(inFile, buffer))
		throw EmptyFile();
	if (buffer != "date | value")
	{	
		try
		{
			searchData(dataMap, buffer);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	while (std::getline(inFile, buffer))
	{
		try
		{
			searchData(dataMap, buffer);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}

void BitcoinExchange::searchData(std::map<std::string, double> &dataMap, std::string buffer)
{
	std::string key = parseDate(buffer);
	int pos = buffer.rfind(' ');
	double value = strtod((buffer.substr(pos)).c_str(), NULL);
	if (value > 1000)
		throw TooLargeNumber();
	else if (value < 0)
		throw NotAPositiveNumber();
	std::map<std::string, double>::iterator it = dataMap.find(key);
	if (it != dataMap.end())
		std::cout << key << " => " << value << " = " << (value * it->second) << std::endl;
	else
	{
		it = dataMap.lower_bound(key);
		if (it != dataMap.begin())
		{
			--it;
			std::cout << key << " => " << value << " = " << (value * it->second) << std::endl;
		}
		else
		{
			std::cout << key << " => " << value << " = " << (value * it->second) << std::endl;
		}
	}
}

std::string BitcoinExchange::parseDate(std::string buffer)
{
	if (buffer.find_first_not_of("0123456789.-| ") != std::string::npos)
		throw InvalidDate("Error: bad input => " + buffer);
	if (!std::isdigit(buffer[0]) || !std::isdigit(buffer[1]) || !std::isdigit(buffer[2]) || !std::isdigit(buffer[3]) || buffer[4] != '-')
		throw InvalidDate("Error: bad input => " + buffer);
	int month = atoi((buffer.substr(5, 6)).c_str());
	if (buffer[7] != '-' || month < 1 || month > 12)
		throw InvalidDate("Error: bad input => " + buffer);
	int day = atoi((buffer.substr(8, 9)).c_str());
	if (buffer[10] != ' ' || day < 1 || day > 31)
		throw InvalidDate("Error: bad input => " + buffer);
	if (buffer[11] != '|' || buffer[12] != ' ')
		throw InvalidDate("Error: bad input => " + buffer);
	int pos = buffer.find(' ');
	return (buffer.substr(0, pos));
}

void BitcoinExchange::getInfo(std::string buffer, std::string &date, double &price)
{
	if (buffer.find_first_not_of("0123456789,-. ") != std::string::npos){
		throw DataBaseError();
	}
	int pos = buffer.find(",");
	date = buffer.substr(0, pos);
	price = strtod((buffer.substr(pos + 1)).c_str(), NULL);
}

BitcoinExchange::EmptyFile::EmptyFile() {}

const char *BitcoinExchange::EmptyFile::what() const throw()
{
	return ("Error: File is empty");
}

BitcoinExchange::TooLargeNumber::TooLargeNumber() {}

const char *BitcoinExchange::TooLargeNumber::what() const throw()
{
	return ("Error: too large a number.");
}

BitcoinExchange::NotAPositiveNumber::NotAPositiveNumber() {}
const char *BitcoinExchange::NotAPositiveNumber::what() const throw()
{
	return ("Error: not a positive number.");
}

BitcoinExchange::InvalidDate::InvalidDate(const std::string& msg) : _message(msg) {}
BitcoinExchange::InvalidDate::~InvalidDate() throw() {}
const char *BitcoinExchange::InvalidDate::what() const throw()
{
	return (_message.c_str());
}

BitcoinExchange::DataBaseError::DataBaseError() {}

const char *BitcoinExchange::DataBaseError::what() const throw()
{
	return ("Error: btc database has invalid data");
}