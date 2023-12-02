/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:55:23 by dateixei          #+#    #+#             */
/*   Updated: 2023/12/02 12:56:01 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main() {
	AAnimal *animals[10];
	for (int i = 0; i < 10; i++)
		if (i % 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return (0);
}