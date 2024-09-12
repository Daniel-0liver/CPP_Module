/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 23:30:30 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/12 18:44:35 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data originalData;
	originalData.id = 123;
	originalData.name = "Test Data";

	uintptr_t raw = Serializer::serialize(&originalData);
	std::cout << "Serialized Data pointer: " << raw << std::endl;

	Data *deserializedData = Serializer::deserialize(raw);

	if (deserializedData == &originalData)
	{
		std::cout << "Deserialization successful!" << std::endl;
		std::cout << "Deserialized Data ID: " << deserializedData->id << std::endl;
		std::cout << "Deserialized Data Name: " << deserializedData->name << std::endl;
	}
	else
	{
		std::cerr << "Deserialization failed!" << std::endl;
	}

	return 0;
}