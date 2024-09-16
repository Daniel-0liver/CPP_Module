/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:01:47 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/16 18:13:29 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <cstdlib>
#include <iomanip>

void	fillList(std::list<int>& list, char** av);
void	fillVector(std::vector<int>& vec, char** av);
// List algorithm
std::list<int> fordJohnsonSortList(const std::list<int>& lst);
std::list<int> merge(const std::list<int>& left, const std::list<int>& right);
// Vector algorithm
std::vector<int> fordJohnsonSortVec(const std::vector<int>& arr);
std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right);

template<typename T>
void print(T cont){
	typename T::iterator it;
	for (it = cont.begin(); it != cont.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

class InvalidInput : public std::exception
{
	public :
		InvalidInput();
		virtual const char* what() const throw();
};
