#include <stdio.h>
#include <string.h>

int main()
{
    // swapping variables is common within sorting algorithms
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];

    // If you pour the contents of one glass directly into the other
    // you will lose the original contents of the second glass
    // so you need to use a temporary glass to store the contents of the second glass
    // before you pour the contents of the first glass into the second glass

    // Also, if we are dealing with arrays of characters (strings)
    // we cannot use the assignment operator to swap the values of the arrays
    // because the assignment operator is not defined for arrays
    // so we need to use the strcpy function to swap the values of the arrays

    // finally, if the length of the second argument of strcpy is less than the length of the first argument
    // this can lead to unexpected behavior
    // so it is important to ensure that the second argument is large enough to store the contents of the first argument
    // one solution is to set the variables to the same length
    // another solution is to use the sizeof operator to get the length of the first argument

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\ny = %s\n", x, y);

    return 0;
}