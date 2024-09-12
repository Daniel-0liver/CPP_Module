/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:07:10 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/12 02:11:32 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <map>
#include <fstream>

class BitcoinExchange
{
private:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &copy);
	~BitcoinExchange();
	BitcoinExchange &operator=(const BitcoinExchange &copy);

public:
	static void		fileChecker(char* file);
};