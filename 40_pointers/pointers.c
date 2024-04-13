#include <stdio.h>

void printAge(int *pAge)
{
    printf("You are %d years old\n", *pAge); // dereferencing the pointer
}

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    // some tasks are performed more easily with pointers
    // * = indirection operator (value at address)

    // Advantages of pointers:
    // 1. dynamic memory allocation
    // 2. Less time in program execution
    // 3. Working on the original variable
    // 4. With help of pointers, we can create data structures like linked list, tree, graph, etc.
    // 5. Returning more than one value from a function
    // 6. Searching and sorting becomes easy

    int age = 21;
    int *pAge = NULL; // good practice to initialize pointers to NULL
    pAge = &age;      // store the address of age in pAge

    printf("Address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);

    printf("Size of age: %lu bytes\n", sizeof(age));
    printf("Size of pAge: %lu bytes\n", sizeof(pAge));

    printf("Value of age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge);

    printAge(pAge);

    return 0;
}