#include <stdio.h>

int main()
{

    // switch = A more efficient alternative to using many "else if" statements
    //          The "break" keyword is used at the end of each case to break out of the switch statement
    //          Allows a value to be tested for equality against many cases

    char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did poorly!");
        break;
    case 'D':
        printf("You did very bad!");
        break;
    case 'F':
        printf("You failed!");
        break;
    default:
        printf("Invalid grade!");
    }

    return 0;
}