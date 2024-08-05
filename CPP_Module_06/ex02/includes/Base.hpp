/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:21:18 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/05 01:32:20 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

#define BLUE "\033[94m"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

class Base
{
public:
	virtual ~Base();
};

class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
