/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 01:01:55 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/05 01:34:39 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);

    delete ptr;
    return 0;
}