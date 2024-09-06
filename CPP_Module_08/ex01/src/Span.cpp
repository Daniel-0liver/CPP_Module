/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:04:00 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/06 23:59:19 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {};

Span::Span(unsigned int size) : N(size), _numbers(size) {};

Span::Span(const Span &copy) : N(copy.N) {
	_numbers.resize(N);
	std::copy(copy._numbers.begin(), copy._numbers.end(), _numbers.begin());
}

Span& Span::operator= (const Span& copy)
{
	if (this != &copy)
	{
		this->N = copy.N;
        this->vec.clear();
        this->vec.resize(N);
        std::copy(copy.vec.begin(), copy.vec.end(), this->vec.begin());
	}
	return (*this);
}

Span::~Span() {}

void Span::printSpan()
{
	std::vector<int>::iterator it;
	for (it = _numbers.begin(); it != _numbers.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}