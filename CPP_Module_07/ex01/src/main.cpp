/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:18:54 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/14 23:29:40 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int array[] = {0, 1, 2, 3};
	int arrayLength = getArrayLength(array);
	iter(array, arrayLength, display<int>);

	std::cout << "--------------------------------------------" << std::endl;

	std::string tab[3] = {"Hello", "world", "!"};
	int sizeTab = getArrayLength(tab);
	iter(tab, sizeTab, display<std::string>);

	std::cout << "--------------------------------------------" << std::endl;

	float floatArray[5] = {42.0f, 26.5f, 34.2f, 90.78f, 3.14f};
	int floatArraySize = getArrayLength(floatArray);
	iter(floatArray, floatArraySize, display<float>);

	return 0;
}