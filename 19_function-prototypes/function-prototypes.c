#include <stdio.h>

void hello(char[], int); // function prototype

int main()
{
    // function prototype

    // WHAT IS IT?
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct number and type of arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing or of the wrong type

    // ADVANTAGES
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files

    char name[] = "Adonalsium";
    int age = 30;

    // if function is called w/o a prototype, it will still work, but it's not a good practice and can result in unexpected behavior
    // If function is called w/ a prototype in place, it will throw an error if the function is called w/ the wrong number of arguments or wrong type of arguments
    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s, you are %d years old\n", name, age);
}