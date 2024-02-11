/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:48:01 by dateixei          #+#    #+#             */
/*   Updated: 2024/02/11 02:25:11 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <exception>

class ScalarConverte
{
	private:
		ScalarConverte();
		ScalarConverte(ScalarConverte const &other);
		ScalarConverte &operator=(ScalarConverte const &other);
	public:
		~ScalarConverte();
		static void	convert(std::string c);
};