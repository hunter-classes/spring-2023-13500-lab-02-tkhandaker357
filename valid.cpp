/*
Author: Torrance Khandaker
Course: CSCI-136
Instructor: their name
Assignment: title, e.g., Lab2A

Asks the user to input a number between 0 and 100 and squares the number
*/

#include <iostream>

auto main() -> int {
    int userNum;
    while (userNum < 0 || userNum > 100) {
        std::cout << "Please input a number between 0 and 100: ";
        std::cin >> userNum;
    };

    std::cout << "The number squared is: " << userNum * userNum << '\n';
    return 0;
}