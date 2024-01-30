/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 00:07:12 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/30 00:07:24 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	Bureaucrat bureaucrat("Bureaucrat", 1);
	AForm form("Form", 1, 1);

	std::cout << bureaucrat << std::endl;
	std::cout << form << std::endl;
	bureaucrat.signForm(form);
	std::cout << form << std::endl;
	return (0);
}