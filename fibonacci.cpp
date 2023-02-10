/*
Author: Torrance Khandaker
Course: CSCI-136
Instructor: their name
Assignment: title, e.g., Lab2D

Asks the user to input a number between 0 and 100 and squares the number
*/

#include <iostream>

auto main() -> int {
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    for (size_t i{ 2 }; i < 60; ++i) 
        fib[i] = fib[i-1] + fib[i-2];
    
    for (size_t i{ 0 }; i < 60; ++i)
        std::cout << fib[i] << ' ';

    return 0;
}

/*
    When fib[i] reaches 2 billion, which is the numerical limit of the int-type as it is only 4 bytes, it overflows and proceeds to
    engage in undefined behavior. This can be solved by using a larger integer type such as a long, which is 8 bytes and successfully
    prints out the first 60 fibonacci numbers.
*/