/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:02:20 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/16 18:13:42 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	fillList(std::list<int>& list, char** av)
{
	int i = 0;

	while (av[++i])
	{
		std::string str(av[i]);
		if (str.find_first_not_of("0123456789") != std::string::npos)
			throw InvalidInput();
		list.push_back(atoi(av[i]));
	}
}

void	fillVector(std::vector<int>& vec, char** av)
{
	int i = 0;

	while (av[++i])
	{
		std::string str(av[i]);
		if (str.find_first_not_of("0123456789") != std::string::npos)
			throw InvalidInput();
		vec.push_back(atoi(av[i]));
	}
}

// ********** ALGORITHM FOR LIST **********
std::list<int> fordJohnsonSortList(const std::list<int>& lst) {
    if (lst.size() <= 1) {
        return lst;
    }
    
    // Divide the list into two halves
    std::list<int>::const_iterator mid = lst.begin();
    std::advance(mid, lst.size() / 2);
    
    std::list<int> left(lst.begin(), mid);
    std::list<int> right(mid, lst.end());
    
    // Recursively sort the two halves
    left = fordJohnsonSortList(left);
    right = fordJohnsonSortList(right);
    
    // Merge the sorted halves
    return merge(left, right);
}

std::list<int> merge(const std::list<int>& left, const std::list<int>& right) {
    std::list<int> result;
    std::list<int>::const_iterator itLeft = left.begin();
    std::list<int>::const_iterator itRight = right.begin();
    
    // Merge the two sorted halves
    while (itLeft != left.end() && itRight != right.end()) {
        if (*itLeft < *itRight) {
            result.push_back(*itLeft++);
        } else {
            result.push_back(*itRight++);
        }
    }
    
    // Copy the remaining elements
    while (itLeft != left.end()) {
        result.push_back(*itLeft++);
    }
    while (itRight != right.end()) {
        result.push_back(*itRight++);
    }
    
    return result;
}

// ********** ALGORITHM FOR VECTOR **********

std::vector<int> fordJohnsonSortVec(const std::vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr;
    }
    
    // Divide the array into two halves
    size_t mid = arr.size() / 2;
    std::vector<int> left(arr.begin(), arr.begin() + mid);
    std::vector<int> right(arr.begin() + mid, arr.end());
    
    // Recursively sort the two halves
    left = fordJohnsonSortVec(left);
    right = fordJohnsonSortVec(right);
    
    // Merge the sorted halves
    return merge(left, right);
}

std::vector<int> merge(const std::vector<int>& left, const std::vector<int>& right) {
    std::vector<int> result;
    size_t i = 0, j = 0;
    
    // Merge the two sorted halves
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            result.push_back(left[i++]);
        } else {
            result.push_back(right[j++]);
        }
    }
    
    // Copy the remaining elements
    while (i < left.size()) {
        result.push_back(left[i++]);
    }
    while (j < right.size()) {
        result.push_back(right[j++]);
    }
    
    return result;
}

InvalidInput::InvalidInput() {}

const char* InvalidInput::what() const throw() {
	return ("Error");
}
