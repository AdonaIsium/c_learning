#include <stdio.h>

int main()
{
    // break and continue are used to control the flow of a loop
    // break = used to exit a loop
    // continue = skips the current iteration, and continues with the next iteration

    // This for loop will print the numbers 1-12 then skip 13 and continue to 14-20
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        printf("%d\n", i);
    }
    // This for loop will print the numbers 1-12 then stop
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}