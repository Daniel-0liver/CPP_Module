/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:01:55 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/14 15:57:56 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	std::srand(std::time(0));
    Base* obj1 = new A;
    identify(obj1);

    Base* obj2 = new B;
    identify(obj2);

    Base* obj3 = new C;
    identify(obj3);

    Base* obj4 = new Base;
    identify(obj4);

	Base* obj5 = generate();
	identify(obj5);

	Base* obj6 = generate();
	identify(obj6);

	Base* obj7 = generate();
	identify(obj7);

    delete obj1;
    delete obj2;
    delete obj3;
    delete obj4;
	delete obj5;
	delete obj6;
	delete obj7;

    return 0;
}