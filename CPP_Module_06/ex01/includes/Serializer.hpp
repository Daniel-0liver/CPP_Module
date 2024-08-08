/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 23:31:09 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/05 01:27:00 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdint.h>
#include <Data.h>

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &);
	Serializer &operator=(const Serializer &);

public:
	~Serializer();
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
};
