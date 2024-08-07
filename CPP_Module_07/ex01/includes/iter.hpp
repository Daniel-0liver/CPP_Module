/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:20:04 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/07 01:58:10 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template <typename T>
void display(T &elem)
{
	std::cout << "Function called on '" << elem << "' element from the array" << std::endl;
}

template <typename T, std::size_t N>
std::size_t arraySize(T (&)[N])
{
	return N;
}

template <typename T, typename F>
void iter(T *array, int len, F f)
{
	for (int i = 0; i < len; i++)
		f(array[i]);
}
