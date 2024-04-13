#include <stdio.h>

// parameters are the variables in the function definition
// parameters require a data type and a name
void birthday(char name[], int age)
{
    printf("\nHappy Birthday dear %s!\n", name);
    printf("You are %d years old!\n", age);
}

int main()
{
    char name[] = "Adonalsium";
    int age = 21;

    // arguments are the values passed to the function
    birthday(name, age);

    return 0;
}