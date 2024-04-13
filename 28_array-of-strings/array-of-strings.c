#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Volvo", "BMW", "Ford", "Mazda"};

    // cars[0] = "Tesla"; // error: assignment to expression with array type
    // use strcpy instead to update the value of an element in the array
    strcpy(cars[0], "Tesla");
    strcpy(cars[1], "Rivian");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

    return 0;
}