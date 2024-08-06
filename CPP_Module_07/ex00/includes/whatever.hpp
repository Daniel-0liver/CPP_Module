/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:20:04 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/06 13:10:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template <typename T>
void swap(T &firstArg, T &secondArg)
{
	T temp = firstArg;
	firstArg = secondArg;
	secondArg = temp;
}

template <typename T>
T min(T x, T y)
{
	return (x < y) ? x : y;
}

template <typename T>
T max(T x, T y)
{
	return (x > y) ? x : y;
}
