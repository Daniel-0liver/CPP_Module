/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 23:04:00 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/07 02:53:47 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {};

Span::Span(unsigned int size) : N(size) {};

Span::Span(const Span &copy) : N(copy.N)
{
	_numbers.resize(N);
	std::copy(copy._numbers.begin(), copy._numbers.end(), _numbers.begin());
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		this->N = copy.N;
		this->_numbers.clear();
		this->_numbers.resize(N);
		std::copy(copy._numbers.begin(), copy._numbers.end(), this->_numbers.begin());
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int number)
{
	if (_numbers.size() < N)
		_numbers.push_back(number);
	else
		throw ::MaximumSizeReachedException();
}

int Span::shortestSpan()
{
	if (_numbers.empty() || _numbers.size() < 2)
		throw::NotEnoughElementsExcepiton();

	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());

	int minSpan = INT_MAX;
	for (size_t i = 0; i < sorted.size(); ++i)
	{
		int span = sorted[i] - sorted[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return (minSpan);
}

int Span::longestSpan()
{
	if (_numbers.empty() || _numbers.size() < 2)
		throw::NotEnoughElementsExcepiton();

	int minNumber = *std::min_element(_numbers.begin(), _numbers.end());
	int maxNumber = *std::max_element(_numbers.begin(), _numbers.end());

	return maxNumber - minNumber;
}

void Span::fillSpanRand()
{
	int random;
	for (size_t i = _numbers.size(); i != N; i++)
	{
		random = rand() % N;
		_numbers.push_back(random);
	}
}

void Span::fillSpanWithIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (std::distance(begin, end) + _numbers.size() > N)
        throw MaximumSizeReachedException();
    _numbers.insert(_numbers.end(), begin, end);
}

void Span::printSpan()
{
	std::vector<int>::iterator it;
	for (it = _numbers.begin(); it != _numbers.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}