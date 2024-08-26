/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:00:19 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/25 23:02:34 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>

class Span {
public:
    class SpanFullException : public std::exception {
        virtual const char* what() const throw() {
            return "Span is full";
        }
    };

    class NoSpanFoundException : public std::exception {
        virtual const char* what() const throw() {
            return "No span can be found";
        }
    };

    Span(unsigned int N) : _maxSize(N) {}

    void addNumber(int number) {
        if (_numbers.size() >= _maxSize) {
            throw SpanFullException();
        }
        _numbers.push_back(number);
    }

    template <typename InputIterator>
    void addNumbers(InputIterator begin, InputIterator end) {
        if (std::distance(begin, end) + _numbers.size() > _maxSize) {
            throw SpanFullException();
        }
        _numbers.insert(_numbers.end(), begin, end);
    }

    int shortestSpan() const {
        if (_numbers.size() < 2) {
            throw NoSpanFoundException();
        }
        std::vector<int> sortedNumbers = _numbers;
        std::sort(sortedNumbers.begin(), sortedNumbers.end());
        int minSpan = sortedNumbers[1] - sortedNumbers[0];
        for (size_t i = 1; i < sortedNumbers.size() - 1; ++i) {
            int span = sortedNumbers[i + 1] - sortedNumbers[i];
            if (span < minSpan) {
                minSpan = span;
            }
        }
        return minSpan;
    }

    int longestSpan() const {
        if (_numbers.size() < 2) {
            throw NoSpanFoundException();
        }
        int minNumber = *std::min_element(_numbers.begin(), _numbers.end());
        int maxNumber = *std::max_element(_numbers.begin(), _numbers.end());
        return maxNumber - minNumber;
    }

private:
    unsigned int _maxSize;
    std::vector<int> _numbers;
};