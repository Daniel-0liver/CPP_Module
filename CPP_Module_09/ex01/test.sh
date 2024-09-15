#!/bin/bash
make re
# Simple expressions
./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
./RPN "7 7 * 7 -"
./RPN "1 2 * 2 / 2 * 2 4 - +"
./RPN "(1 + 1)"

# More complex expressions
./RPN "5 1 2 + 4 * + 3 -" # Expected output: 14
./RPN "3 4 + 2 * 7 /"     # Expected output: 2
./RPN "4 2 3 * +"         # Expected output: 10
./RPN "1 2 8 * + 3 -"    # Expected output: 14
./RPN "1 7 1 1 + - / 3 * 2 1 1 + + -" # Expected output: -3.4
./RPN "2 3 + 5 * 6 -"     # Expected output: 19
./RPN "3 5 8 * 7 + *"     # Expected output: 141
./RPN "9 3 / 2 * 5 +"     # Expected output: 11
./RPN "2 3 4 * + 5 6 * +" # Expected output: 44
./RPN "5 1 2 + 4 * + 3 -" # Expected output: 14
./RPN nullptr