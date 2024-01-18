/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:55:23 by dateixei          #+#    #+#             */
/*   Updated: 2024/01/13 14:53:06 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main() {
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	std::cout << "\nmeta->getType(): " << meta->getType() << std::endl;
	std::cout << "j->getType(): " << j->getType() << std::endl;
	std::cout << "i->getType(): " << i->getType() << std::endl << std::endl;
	
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrong = new WrongCat();
	
	std::cout << "wrongMeta->getType(): " << wrongMeta->getType() << std::endl;
	std::cout << "wrong->getType(): " << wrong->getType() << std::endl << std::endl;
	
	wrongMeta->makeSound();
	wrong->makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrong;
	return (0);
}