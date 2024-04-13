#include <stdio.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    { // switch statement is used to compare the value of operator
    case '+':
        result = num1 + num2;
        printf("\nresult: %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nresult: %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nresult: %.2lf\n", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nresult: %.2lf\n", result);
        break;
    // default is used to handle the case when the value of operator is not one of the cases
    default:
        printf("\n%c is not a valid operator!\nValid operators are (+, -, *, /)\n", operator);
    }
    return 0;
}