#include <stdio.h>

int main()
{

    /*
    Variables are containers for storing data values.
    In C, there are different types of variables, for example:
    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

    We refer to a variable's name to access its value. To create a variable, you must specify the type and assign it a value.
    */

    int x;       // Declare a variable called x
    x = 123;     // Assign the value 123 to x
    int y = 321; // Declare a variable called y and assign the value 321 to it

    int age = 38;               // Integer (whole number)
    double gpa = 3.95;          // Floating point number
    char grade = 'A';           // Character
    char name[] = "Adonalsium"; // String (array of characters)

    printf("You are %d years old\n", age);
    printf("Your GPA is %f\n", gpa);
    printf("Your grade is %c\n", grade);
    printf("Your name is %s\n", name);

    return 0;
}