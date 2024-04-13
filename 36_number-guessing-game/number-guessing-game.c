#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess; // user's guess
    int guesses = 0;
    int answer;

    srand(time(0)); // seed the random number generator

    // generate a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess between %d and %d: ", MIN, MAX);
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("You got it!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("*****************************\n");
    printf("The number was %d\n", answer);
    printf("It took you %d guesses\n", guesses);
    printf("*****************************\n");

    return 0;
}