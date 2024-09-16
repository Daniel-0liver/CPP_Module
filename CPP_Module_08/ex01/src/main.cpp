/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:18:54 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/15 17:52:25 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void testAddNumber()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	sp.printSpan();
}

void testException()
{
	Span sp = Span(1);
	sp.addNumber(5);
	try {
		sp.addNumber(3);
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

void testLargeSpan()
{
	Span sp = Span(20000);
	sp.fillSpanRand();
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	// sp.printSpan();

}

int main()
{
	std::cout << "Test 1: Basic functionality" << std::endl;
	testAddNumber();
	
	std::cout << "\nTest 2: Exception handling" << std::endl;
	testException();
	
	std::cout << "\nTest 3: Large span" << std::endl;
	testLargeSpan();
	
	return 0;
}