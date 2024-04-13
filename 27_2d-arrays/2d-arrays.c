#include <stdio.h>

int main()
{
    // 2d array = an array where each element is an entire array
    //  useful if you need a matrix, grid, or table of data
    /*
    int numbers[2][3] = {{1, 2, 3},
                         {4, 5, 6}};
    */

    int numbers[3][3];

    /*
        in a 2d array, in order to get the length of the array
        you need to divide the size of the array by the size of the first element
        and to get the length of the nested array, you need to divide the size of the first element
        by the size of the first element of the higher array
    */
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}