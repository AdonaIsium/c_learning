#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7,
};

int main()
{
    // enum = a uswer defined type of named integer identifiers
    // - helps make a program more readable

    enum Day today = Sun;

    // printf("Day %d\n", today); // enums are NOT STRINGS, but they can be treated as integers

    if (today == Sun || today == Sat)
    {
        printf("\nIt's the weekend! Study time!\n");
    }
    else
    {
        printf("\nIt's a weekday! Work time!\n");
    }

    return 0;
}