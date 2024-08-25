/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:18:54 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/25 21:18:33 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int arr[9] = {0, 23, 4, 53, 3, 34, 33, 2, 1};
	std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	print(vec);
	try
	{
		std::cout << easyfind(vec, 23) << " found." << std::endl;
		std::cout << easyfind(vec, 22) << " found." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}