/*
Author: Torrance Khandaker
Course: CSCI-136
Instructor: their name
Assignment: title, e.g., Lab2B

Asks the user to input a number between 0 and 100 and squares the number
*/

#include <iostream>

auto main() -> int {
    int L, U;
    std::cout << "Please enter the lower limit of your interval: ";
    std::cin >> L;
    std::cout << "Please enter the upper limit of your interval: ";
    std::cin >> U;

    for (int i{ L }; i < U; ++i) 
        std::cout << i << ' ';
    std::cout << '\n';

    return 0;
}