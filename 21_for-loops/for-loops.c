#include <stdio.h>

int main()
{
    // for loop = repeats a section of code a certain number of times

    // in c, for loops require 3 parameters, separated by semicolons
    // those parameters are:
    // 1. a variable to keep track of the number of times the loop has run
    // 2. a condition that is checked before each iteration of the loop
    // 3. an increment (or decrement) to change the value of the variable

    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}