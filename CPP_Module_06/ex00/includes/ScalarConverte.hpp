/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:48:01 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/27 17:58:04 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class ScalarConverte
{
	public:
		ScalarConverte();
		ScalarConverte(ScalarConverte const &other);
		~ScalarConverte();
		ScalarConverte &operator=(ScalarConverte const &other);
		void	convert(std::string c);
};