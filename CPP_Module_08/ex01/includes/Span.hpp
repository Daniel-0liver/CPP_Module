/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:00:19 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/25 23:02:34 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>

class MaximumSizeReachedException : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("Maximum size reached!");
	}
};

class Span
{
private:
	unsigned int N;
	std::vector<int> _numbers;
	Span();

public:
	Span(unsigned int size);
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	~Span();

	// void addNumber();
	// int shortestSpan();
	// int longestSpan();
	void printSpan();
};