/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dateixei <dateixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 00:10:53 by dateixei          #+#    #+#             */
/*   Updated: 2023/10/08 02:47:02 by dateixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	replaceString( std::string s1, std::string s2, std::string line, std::ofstream& outputFile ) {
	int	count;

	count = 0;
	for ( int i = 0; line[i + count]; i++ ) {
		if ( ( count + i ) == line.find( s1, ( i + count ) ) ) {
			outputFile << s2;
			count += s1.length() - 1;
		}
		else
			outputFile << line[i + count];
	}
	return (0);
}

int	replaceInFile( std::string s1, std::string s2, std::string fileName ) {
	std::string		line;
	std::ifstream	inputFile;
	std::ofstream	outputFile;
	std::string		newFileName;

	inputFile.open( fileName );
	if (!inputFile.is_open()) {
		std::cerr << "Error: Unable to open input file: " << fileName << std::endl;
        return ( -1 );
	}
	newFileName = fileName + ".replace";
	outputFile.open( newFileName );
	if (!outputFile.is_open()) {
		std::cerr << "Error: Unable to create output file: " << newFileName << std::endl;
        return ( -1 );
	}
	std::getline( inputFile, line, '\0' );
	replaceString( s1, s2, line, outputFile );
	return ( 0 );
}

int	main(int argc, char **argv) {
	std::string	s1;
	std::string	s2;
	std::string	fileName;

	if ( argc != 4) {
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return ( 1 );
	}
	s1 = argv[2];
	s2 = argv[3];
	fileName = argv[1];
	if ( s1 == s2 ) {
		std::cerr << "s1 is egual to s2" << std::endl;
        return ( 1 );
	}
	if ( s1.size() <= 0 || s2.size() <= 0 ) {
		std::cerr << "String can't be empty" << std::endl;
        return ( 1 );
	}
	replaceInFile( s1, s2, fileName );
	return (0);
}
