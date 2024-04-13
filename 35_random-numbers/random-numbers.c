#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pseudo random numbers = a set of values or elements that are statistically random
    // (Don't use these for any sort of cryptographic security)

    srand(time(0)); // seed the random number generator

    int number1 = (rand() % 20) + 1; // generate a random number between 1 and 20
    int number2 = (rand() % 20) + 1;
    int number3 = (rand() % 20) + 1;

    printf("You rolled a %d\n", number1);
    printf("You rolled a %d\n", number2);
    printf("You rolled a %d\n", number3);

    return 0;
}