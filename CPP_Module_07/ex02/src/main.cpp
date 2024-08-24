/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:18:54 by dateixei          #+#    #+#             */
/*   Updated: 2024/08/25 00:51:11 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    try {
        Array<int> arr1;
        std::cout << "arr1 size: " << arr1.size() << std::endl;

        Array<int> arr2(5);
        std::cout << "arr2 size: " << arr2.size() << std::endl;

        Array<int> arr3(arr2);
        std::cout << "arr3 size: " << arr3.size() << std::endl;

        Array<int> arr4;
        arr4 = arr2;
        std::cout << "arr4 size: " << arr4.size() << std::endl;

		arr2[0] = 10;
        std::cout << "arr2[0]: " << arr2[0] << std::endl;
        std::cout << "arr3[0]: " << arr3[0] << std::endl;
        std::cout << "arr4[0]: " << arr4[0] << std::endl;

        std::cout << arr2[10] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}