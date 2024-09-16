/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:54:32 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/16 17:42:50 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void expressionChecker(char *expression)
{
	std::stack<double> seq;
	std::string exp(expression);

    while (!exp.empty() && exp[exp.size() - 1] == ' ')
	{
        exp.erase(exp.size() - 1);
	}

	while (!exp.empty() && exp[0] == ' ')
    {
        exp.erase(0, 1);
    }
	
	if ((exp.find_first_not_of("0123456789 -+/*") != std::string::npos) &&
			exp.find("  ") != std::string::npos)
	{
		throw InvalidExpression();
	}

	while (true)
	{
		size_t pos = exp.find(' ');
		if (exp.find(' ') == std::string::npos)
		{
			if (exp.size() == 1 && exp.find_first_of("+-/*") != std::string::npos)
				calculate(seq, static_cast<int>(exp[0]));
			else
			{
				double res = static_cast<double>(atoi(exp.c_str()));
				if (res > -10 && res < 10)
					seq.push(res);
				else
					throw OutOfRange();
			}
			break;
		}
		std::string sub = exp.substr(0, pos);
		if (sub.size() == 1 && sub.find_first_of("+-/*") != std::string::npos)
			calculate(seq, static_cast<int>(exp[0]));
		else
		{
			double res = static_cast<double>(atoi(sub.c_str()));
			if (res > -10 && res < 10)
				seq.push(res);
			else
				throw OutOfRange();
		}
		exp = exp.substr(pos + 1);
	}
	if (seq.size() == 1)
		std::cout << seq.top() << std::endl;
	else
		throw OutOfRange();
}

void calculate(std::stack<double> &seq, int operation)
{
	if (seq.size() < 2)
		throw OutOfRange();
	double x = seq.top();
	seq.pop();
	double y = seq.top();
	seq.pop();

	switch (operation)
	{
	case 42:
		seq.push(y * x);
		return;
	case 43:
		seq.push(y + x);
		return;
	case 45:
		seq.push(y - x);
		return;
	case 47:
		seq.push(y / x);
		return;
	default:
		throw OutOfRange();
	}
}

InvalidExpression::InvalidExpression() {}

const char *InvalidExpression::what() const throw()
{
	return ("Error");
}

OutOfRange::OutOfRange()
{
}

const char *OutOfRange::what() const throw()
{
	return ("Error: Out of range.");
}