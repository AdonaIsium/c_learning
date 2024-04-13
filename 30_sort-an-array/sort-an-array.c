#include <stdio.h>

void sortNums(int array[], int size)
{
    /*
        What this algorithm does is compare the first element with the second element
        and if the first element is greater than the second element, it swaps the two elements
        then it compares the second element with the third element
        and if the second element is greater than the third element, it swaps the two elements
        and so on

        This is called a bubble sort algorithm

        The reason it needs two for loops is because it needs to compare each element with the next element
        and it needs to do this for each element in the array
        So the first for loop is used to iterate through each element in the array
        and the second for loop is used to compare each element with the next element
    */
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            // If we want the result to be in revers order,
            // we can change the comparison operator from > to <
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void sortChars(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printNumsArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void printCharsArray(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
}

int main()
{
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    char arrayChars[] = {'Z', 'J', 'D', 'U', 'Y', 'A', 'X', 'B', 'W', 'V', 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'C', 'I', 'H', 'G', 'F', 'E'};
    int size = sizeof(array) / sizeof(array[0]);
    int sizeChars = sizeof(arrayChars) / sizeof(arrayChars[0]);

    sortNums(array, size);
    printNumsArray(array, size);

    printf("\n");

    sortChars(arrayChars, sizeChars);
    printCharsArray(arrayChars, sizeChars);

    return 0;
}