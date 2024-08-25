/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:00:19 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/25 21:19:40 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <string>

class NotFoundException : public std::exception
{
public:
	const char *what() const throw()
	{
		return ("Element not found.");
	}
};

template <typename T>
int easyfind(T &container, int occur)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), occur);
	if (it == container.end())
		throw NotFoundException();
	return *it;
}

template <typename T>
void print(T container)
{
	typename T::iterator it;
	for (it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}