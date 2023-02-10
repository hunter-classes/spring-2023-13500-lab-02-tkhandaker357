/*
Author: Torrance Khandaker
Course: CSCI-136
Instructor: their name
Assignment: title, e.g., Lab2C

Asks the user to input a number between 0 and 100 and squares the number
*/

#include <iostream>

auto main() -> int {
    int myArray[10];
    for (size_t i{ 0 }; i < 10; ++i) 
            myArray[i] = 1;

    char doItAgain{ 'y' };
    do {
        for (size_t i{ 0 }; i < 10; ++i) 
            std::cout << myArray[i] << ' ';
        std::cout << '\n';

        int whichElement, newValue;
        do {
            std::cout << "Enter an element you would like to change: ";
            std::cin >> whichElement;
        } while (whichElement < 0 && whichElement > 10);

        std::cout << "Enter a new value for that index: ";
        std::cin >> newValue;
        myArray[whichElement - 1] = newValue;

        std::cout << "Do it again?: ";
        std::cin >> doItAgain;
    } while (doItAgain == 'y');

    return 0;
}