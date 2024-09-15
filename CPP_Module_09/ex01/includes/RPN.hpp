/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:47:31 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/15 01:32:51 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <exception>

void expressionChecker(char* expression);
void calculate(std::stack<double>& seq, int operation);

class InvalidExpression : public std::exception
{
	public:
		InvalidExpression();
		virtual const char* what() const throw();
};

class OutOfRange : public std::exception
{
	public:
		OutOfRange();
		virtual const char* what() const throw();
};
