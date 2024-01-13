/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:55:23 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/13 15:45:41 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main() {
	std::cout << "---------------------" << std::endl;
	std::cout << "----- Test Array of Animal -----" << std::endl;
	std::cout << "---------------------" << std::endl;
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

	std::cout << "---------------------" << std::endl;
	std::cout << "----- Test Animal -----" << std::endl;
	std::cout << "---------------------" << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;
	delete j;
	delete i;

	// std::cout << "---------------------" << std::endl;
	// std::cout << "----- Test AAnimal -----" << std::endl;
	// std::cout << "---------------------" << std::endl;
	// AAnimal *animal = new AAnimal();
	// std::cout << std::endl;
	// animal->makeSound();
	// std::cout << std::endl;
	// delete animal;
	return (0);
}