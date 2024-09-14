/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:07:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/14 02:30:14 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
private:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &copy);
	~BitcoinExchange();
	BitcoinExchange &operator=(const BitcoinExchange &copy);

public:
	static void fileChecker(char *file);
	static void validateData(std::map<std::string, double> &dataMap, std::ifstream &dataFile);
	static void compareValues(std::map<std::string, double> &dataMap, std::ifstream &inFile);
	static void getInfo(std::string buffer, std::string &date, double &price);
	static void searchData(std::map<std::string, double> &dataMap, std::string buffer);
	static std::string parseDate(std::string buffer);

	class EmptyFile : public std::exception
	{
	public:
		EmptyFile();
		virtual const char *what() const throw();
	};

	class ValueOutOfRange : public std::exception
	{
	public:
		ValueOutOfRange();
		virtual const char *what() const throw();
	};

	class InvalidInput : public std::exception
	{
	public:
		InvalidInput();
		virtual const char *what() const throw();
	};

	class InvalidDate : public std::exception
	{
	public:
		InvalidDate();
		virtual const char *what() const throw();
	};

	class DataBaseError : public std::exception
	{
	public:
		DataBaseError();
		virtual const char *what() const throw();
	};
};