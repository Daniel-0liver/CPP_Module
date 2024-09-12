/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:01:55 by dateixei          #+#    #+#             */
/*   Updated: 2024/09/12 19:03:13 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    Base* obj1 = new A;
    identify(obj1); // Expected output: A object identified !

    Base* obj2 = new B;
    identify(obj2); // Expected output: B object identified !

    Base* obj3 = new C;
    identify(obj3); // Expected output: C object identified !

    Base* obj4 = new Base;
    identify(obj4); // Expected output: Object not identified :(

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