#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type

    double prices[] = {5.0, 10.0, 15.0, 30.0, 69.0, 420.0, 666.0};

    char name[] = "Adonalsium";
    /*
        to loop through an array of elements getting the length of the array
        we can use the sizeof() function
        sizeof() returns the size of the array in bytes
        we can divide the size of the array by the size of the first element
        to get the length of the array in elements
    */
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("The price is: $%.2lf\n", prices[i]);
    }

    return 0;
}