/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:01:55 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/14 16:55:53 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	std::srand(std::time(0));
    A objA;
    identify(objA);

    B objB;
    identify(&objB);

    C objC;
    identify(objC);
    identify(&objC);

    Base objBase;
    identify(objBase);

	Base* objRandOne = generate();
	identify(objRandOne);

	Base* objRandTwo = generate();
	identify(objRandTwo);

	Base* objRandThree = generate();
	identify(objRandThree);

	delete objRandOne;
	delete objRandTwo;
	delete objRandThree;

    return 0;
}