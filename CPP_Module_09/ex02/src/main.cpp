/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:18:54 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/16 18:10:08 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av)
{
	if (ac > 1)
	{
		std::list<int> lst;
		std::vector<int> vec;
		std::vector<int> temp;
		try {
			clock_t start = clock();
			fillList(lst, av);
			lst = fordJohnsonSortList(lst);
			clock_t end = clock();
			fillVector(temp, av);
			std::cout << "Before: ";
			::print(temp);
			std::cout << "After: ";
			::print(lst);
			
			std::cout << "Time to process a range of " 
                      << lst.size() << " elements with std::list : " 
					  << std::fixed << std::setprecision(6)
                      << static_cast<double>(end - start) / CLOCKS_PER_SEC
                      << " us" << std::endl;
			
			start = clock();
			fillVector(vec, av);
			vec = fordJohnsonSortVec(vec);
			end = clock();

			std::cout << "Time to process a range of "
                      << vec.size() << " elements with std::vector : "
					  << std::fixed << std::setprecision(6)
                      << static_cast<double>(end - start) / CLOCKS_PER_SEC
                      << " us" << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "Error: invalid number of arguments" << std::endl;
	return 0;
}