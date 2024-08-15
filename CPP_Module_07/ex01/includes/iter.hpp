/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:20:04 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/14 23:30:02 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template <typename T>
void display(T &element)
{
	std::cout << "Function called on '" << element << "' element from the array" << std::endl;
}

template <typename T, std::size_t NumIterations>
std::size_t getArrayLength(T (&)[NumIterations])
{
	return NumIterations;
}

template <typename T, typename F>
void iter(T *array, int len, F function)
{
	for (int i = 0; i < len; i++)
		function(array[i]);
}
