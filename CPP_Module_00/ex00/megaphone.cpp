/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:57:17 by dateixei          #+#    #+#             */
/*   Updated: 2023/04/21 01:29:01 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cctype>

int main(int argc, char* argv[]) {
    if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
    }
    for (int i = 1; i < argc; i++) {
		std::string str(argv[i]);
		for (size_t j = 0; j < str.length(); j++) {
			str[j] = toupper(str[j]);
		}
		std::cout << str;
		if (argv[i + 1])
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}
