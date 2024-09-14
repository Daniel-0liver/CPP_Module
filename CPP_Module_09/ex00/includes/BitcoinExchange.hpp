/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:07:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/14 14:18:59 by dateixei         ###   ########.fr       */
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

	class TooLargeNumber : public std::exception
	{
	public:
		TooLargeNumber();
		virtual const char *what() const throw();
	};

	class NotAPositiveNumber : public std::exception
	{
	public:
		NotAPositiveNumber();
		virtual const char *what() const throw();
	};

	class InvalidDate : public std::exception
	{
	private:
		std::string _message;
	public:
		InvalidDate(const std::string& msg);
		virtual ~InvalidDate() throw();
		virtual const char *what() const throw();
	};

	class DataBaseError : public std::exception
	{
	public:
		DataBaseError();
		virtual const char *what() const throw();
	};
};